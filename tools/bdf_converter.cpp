#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include <set>

bool starts_with(std::string const& line, const char* pattern)
{
	return line.find(pattern) == 0;
}

std::string bits(char c, int bit_count)
{
	std::stringstream output;

	uint8_t mask = 0x08;
	for(int i=0; i<std::min(4,bit_count); ++i)
	{
		output << ((c & (mask >> i)) ? "[]" : "  ");
	}

	return output.str();
}


std::string hline(unsigned int width)
{
	std::stringstream result;
	result << "\"*";
	for(unsigned int i=0; i<width; ++i)
	{
		result << "--";
	}
	result << "*\"";

	return result.str();
}

const char nl = '\n';

class BdfConverter
{
private:
	typedef void (BdfConverter::*State_t) (std::string const&);
	State_t current_state;
	std::istream & input;
	std::ostream & output;

	std::string family_name;
	std::string weight;
	std::string pixel_size;

	struct BitmapParser
	{
		unsigned int width;
		unsigned int height;
		std::istream & input;
		std::ostream & output;

		BitmapParser(
			unsigned int width_,
			unsigned int height_,
			std::istream & input_,
			std::ostream & output_)
		: width(width_)
		, height(height_)
		, input(input_)
		, output(output_)
		{}

		bool process_line(std::string const& line, std::vector<std::string> & lines)
		{
			if(starts_with(line, "ENDCHAR"))
			{
				return false;
			}

			std::stringstream tmp;

			unsigned int width_cnt = 0;
			for(auto c : line)
			{
				char buffer[2] = {c,0};
				char * end;
				tmp << bits(strtol(buffer, &end, 16), width-width_cnt);
				width_cnt+=4;
				if(width_cnt >= width)
				{
					break;
				}
			}

			lines.push_back(tmp.str());

			return true;
		}

		std::vector<std::string> get_bitmap_lines()
		{
			std::vector<std::string> lines;
			char buffer[200] = {0};
			do
			{
				input.getline(buffer, sizeof(buffer));
			} while(process_line(buffer, lines));

			return lines;
		}

		void run()
		{
			output
				<< "\tstatic constexpr char bitmap["<< height << "][" << (width*2+1) << "] = {\n";
			const auto lines = get_bitmap_lines();

			for(unsigned int i=0; i<lines.size(); ++i)
			{
				output
					<< "\t\t\"" << lines[i] << "\""
					<< ((i<lines.size()-1) ? ",\n" : "};\n");
			}
		}
	};

	struct CharParser
	{
		typedef void (CharParser::*State_t) (std::string const&);
		State_t current_state;
		std::string name;
		std::string font_name;
		std::istream & input;
		std::ostream & output;
		static std::set<std::string> parsed_glyphes;
		static std::set<int> parsed_encodings;

		static bool is_unique(std::string const& name)
		{
			return
				CharParser::parsed_glyphes.find(name) ==
				CharParser::parsed_glyphes.end();
		}

		static bool is_unique(int encoding)
		{
			return
				CharParser::parsed_encodings.find(encoding) ==
				CharParser::parsed_encodings.end();
		}

		int encoding;
		unsigned int width;
		unsigned int height;
		int x_offset;
		int y_offset;
		int d_width;
		bool is_unique_encoding;

		CharParser(
			std::string const& name_,
			std::string const& font_name_,
			std::istream & input_,
			std::ostream & output_)
		: current_state()
		, name(name_)
		, font_name(font_name_)
		, input(input_)
		, output(output_)
		, is_unique_encoding(false)
		{}

		void run()
		{
			if(is_unique(name))
			{
				parsed_glyphes.insert(name);
				output
					<< "template<>\n struct " << font_name << "::Glyphe<" << ">" << nl
					<< "{\n";
				char buffer[200] = {0};
				do
				{
					input.getline(buffer, sizeof(buffer));
				} while(process_line(buffer));

				output
					<< "};\n"
					<< nl;

				// if(is_unique_encoding)
				// {
				// 	output
				// 		<< "template<>\n"
				// 		<< "struct lockup<" << name << "::encoding>\n"
				// 		<< "{\n"
				// 		<< "\tusing glyph = " << name << ";\n"
				// 		<< "};\n"
				// 		<< nl;
				// }
			}
			else
			{
				char buffer[200] = {0};
				do
				{
					input.getline(buffer, sizeof(buffer));
				} while(not starts_with(buffer, "ENDCHAR"));
			}
		}

		bool process_line(std::string const& line)
		{
			if(starts_with(line, "ENCODING"))
			{
				encoding = atoi(line.c_str()+9);
				if(is_unique(encoding))
				{
					is_unique_encoding = true;
					parsed_encodings.insert(encoding);
				}

				output
					<< "\tusing encoding = type::Encoding<"
					<< encoding
					<< ">;\n";
			}
			else if(starts_with(line, "DWIDTH"))
			{
				d_width = atoi(line.c_str()+7);
				output
					<< "\tusing next = = type::Constant<uint8_t, "
					<< d_width << ">;\n";
			}
			else if(starts_with(line, "SWIDTH"))
			{}
			else if(starts_with(line, "BBX"))
			{
				char * end;
				width    = strtol(line.c_str()+4, &end, 10);
				height   = strtol(end, &end, 10);
				x_offset = strtol(end, &end, 10);
				y_offset = strtol(end, &end, 10);

				output
					<< "\tusing width = type::Constant<uint8_t, " << width << ">;\n"
					<< "\tusing height = type::Constant<uint8_t, " << height << ">;\n"
					<< "\tusing x = type::Constant<uint8_t, " << x_offset << ">;\n"
					<< "\tusing y = type::Constant<uint8_t, " << y_offset << ">;\n";
			}
			else if(starts_with(line, "BITMAP"))
			{
				BitmapParser bitmap_parser(width, height, input, output);
				bitmap_parser.run();
				return false;
			}
			return true;
		}
	};


	void process_line(std::string const& line)
	{
		(this->*current_state)(line);
	}

	void find_start_(std::string const& line)
	{
		if(starts_with(line, "STARTFONT"))
		{
			current_state = &BdfConverter::info_;
		}
	}

	void info_(std::string const& line)
	{
		if(starts_with(line, "STARTPROPERTIES"))
		{
			current_state = &BdfConverter::properties_;
		}
	}

	std::string font_name;

	void properties_(std::string const& line)
	{
		if(starts_with(line, "FAMILY_NAME"))
		{
			family_name = std::string(line.c_str()+13, line.size()-14);
		}
		else if(starts_with(line, "WEIGHT_NAME"))
		{
			weight = std::string(line.c_str()+13, line.size()-14);
		}
		else if(starts_with(line, "PIXEL_SIZE"))
		{
			pixel_size = std::string(line.c_str()+11, line.size()-11);
		}
		else if(starts_with(line, "ENDPROPERTIES"))
		{
			std::stringstream tmp;
			tmp << family_name << weight << pixel_size;
			font_name = tmp.str();

			output
				<< "namespace pixel_display\n"
				<< "{\n\n"
				<< "namespace font\n"
				<< "{\n\n"
				<< "struct " << family_name << weight << pixel_size << nl
				<< "{\n"
				<< nl
				<< "template<class T>\n"
				<< "struct lockup;\n"
				<< nl;

			current_state = &BdfConverter::chars_;
		}

	}

	void chars_(std::string const& line)
	{
		if(starts_with(line, "STARTCHAR"))
		{
			CharParser char_parser(std::string(&line[10], line.size()-10),  font_name, input, output);
			char_parser.run();
		}
		else if(starts_with(line, "ENDFONT"))
		{

		}
		else if(starts_with(line, "CHARS"))
		{}
	}

public:
	BdfConverter(std::istream & input_, std::ostream & output_)
	: current_state(&BdfConverter::find_start_)
	, input(input_)
	, output(output_)
	{}

	void run()
	{
		output
			<< "#pragma once\n"
			<< "#include <pixel_display/type/encoding.h>\n"
			<< "#include <pixel_display/type/size.h>\n"
			<< "#include <pixel_display/type/point.h>\n"
			<< nl;

		char buffer[200] = {0};
		while(not input.eof())
		{
			input.getline(buffer, sizeof(buffer));
			process_line(buffer);
		}

		output
			<< nl
			<< "};\n"
			<< nl
			<< "} //namespace font\n"
			<< nl
			<< "} //namespace pixel_display\n"
			<< std::endl;
	}
};


std::set<std::string> BdfConverter::CharParser::parsed_glyphes =
	std::set<std::string>();

std::set<int> BdfConverter::CharParser::parsed_encodings = std::set<int>();

//------------------------------------------------------------------------------

int main(int argc, char *argv[])
{
	if(argc <= 1)
	{
		std::cout << "Supply input file!" << std::endl;
		return -1;
	}

	std::ifstream input(argv[1]);

	if(not input.is_open())
	{
		std::cout
			<< "Could not open input file: "
			<< argv[1] << "!" << std::endl;
		return -1;
	}

	std::ostream output(std::cout.rdbuf());

	std::filebuf file_buffer;
	if(argc > 2)
	{
		file_buffer.open(argv[2], std::ios_base::out);
		if(not file_buffer.is_open())
		{
			std::cout
				<< "Could not open output file: "
				<< argv[2] << "!" << std::endl;
			return -1;
		}
		output.rdbuf(&file_buffer);
	}

	BdfConverter parser(input, output);
	parser.run();

	return 0;
}