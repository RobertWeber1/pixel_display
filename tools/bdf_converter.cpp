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

template<size_t N, class Func>
struct Action_
{
	char const(&pattern)[N];
	Func const& func;

	Action_(char const(&pattern)[N], Func const& fun)
	: pattern(pattern)
	, func(fun)
	{}

	void operator()(std::string const& line) const
	{
		if(line.find(pattern) == 0)
		{
			func(line.c_str()+(N-1), line.size()-(N-1));
		}
	}
};

template<size_t N, class Func>
struct Action_<N, Func> action(char const(&pattern)[N], Func const& fun)
{
	return Action_<N, Func>(pattern, fun);
}

template<class ... Actions>
bool process(std::string const& line, Actions const& ... actions)
{
	(void)std::initializer_list<int>{0, (actions(line),0)...};
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

std::string remove_quotes(char const*s, size_t l)
{
	char const* start = s;
	char const* end = s;

	while(*s != '"' and s<start+l)
	{
		++s;
	}
	start = ++s;

	while(*s != '"' and s<start+l)
	{
		++s;
	}
	end = s;

	return std::string(start, end);
}

bool is_non_white_space(char c)
{
	return (c > 0x20) and (c < 0x7f);
}

std::string strip(char const*s, size_t l)
{
	char const* start = s;
	char const* end = s;

	while(*s == ' ' and s<start+l)
	{
		++s;
	}
	start = s;

	while(is_non_white_space(*s) and s<start+l)
	{
		++s;
	}
	end = s;

	return std::string(start, end);
}

const char nl = '\n';
const char start_comment_block[] =
	"\\**************************************"
	"*****************************************\n";
const char end_comment_block[] =
	"****************************************"
	"****************************************\\\n";

std::string make_ws(size_t count)
{
	std::string ret;

	for(size_t i=0; i<count; ++i)
	{
		ret += ' ';
	}

	return ret;
}

const char* find_left_ws(const char* pos, const char* start)
{
	const char* curr_pos = pos;

	while(*curr_pos != ' ' and curr_pos >= start)
	{
		--curr_pos;
	}

	if(curr_pos != start)
	{
		return curr_pos;
	}

	return pos;
}

const char* find_right_ws(const char* pos, const char* end)
{
	const char* curr_pos = pos;

	while(*curr_pos != ' ' and curr_pos <= end)
	{
		++curr_pos;
	}

	if(curr_pos != end)
	{
		return curr_pos;
	}

	return pos;
}

void print_copyright_notice(
	std::ostream& output,
	std::string const& tag,
	std::string const& copy_right_notice)
{
	output << tag;

	if(tag.size() + copy_right_notice.size() > 80)
	{
		size_t tag_width = tag.size();
		size_t rest_width = 80 - tag_width;

		const char* start = copy_right_notice.c_str();
		const char* end = copy_right_notice.c_str() + copy_right_notice.size();
		const char* pos = start + rest_width;
		do
		{
			pos = find_left_ws(pos, start);

			output << std::string(start, pos) << nl;
			start = pos;
			pos += rest_width;

			if(pos<end)
			{
				output << make_ws(tag_width-1);
			}

		}while(pos < end);
	}
	else
	{
		output << copy_right_notice << nl;
	}
}

class BdfConverter
{
private:
	typedef void (BdfConverter::*State_t) (std::string const&);
	State_t current_state;
	std::istream & input;
	std::ostream & output;

	std::stringstream comments_;
	std::string family_name;
	std::string font_id;
	std::string copy_right_notice;
	std::string weight;
	std::string pixel_size;
	std::string font_name;

	struct BitmapParser
	{
		unsigned int width;
		unsigned int height;
		int dx;
		int dy;
		std::istream & input;
		std::ostream & output;

		BitmapParser(
			unsigned int width_,
			unsigned int height_,
			int dx_,
			int dy_,
			std::istream & input_,
			std::ostream & output_)
		: width(width_)
		, height(height_)
		, dx(dx_)
		, dy(dy_)
		, input(input_)
		, output(output_)
		{}

		bool process_line(
			std::string const& line,
			std::vector<std::string> & lines)
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
			char buffer[1000] = {0};
			do
			{
				input.getline(buffer, sizeof(buffer));
			} while(process_line(buffer, lines));

			return lines;
		}

		void run()
		{
			std::stringstream tmp_out;

			tmp_out << "\tusing bit_map = decltype(\n";
			const auto lines = get_bitmap_lines();

			for(unsigned int i=0; i<lines.size(); ++i)
			{
				tmp_out
					<< "\t\t\"" << lines[i] << "\""
					<< ((i<lines.size()-1) ? "\n" : "_make_bitmap);\n");
			}

			output
					<< "\tusing width = Constant<" << width << ">;\n"
					<< "\tusing height = Constant<" << height << ">;\n"
					<< "\tusing x = Constant<" << (0 + dx) << ">;\n"
					<< "\tusing y = Constant<" << (0 + dy) << ">;\n"
					<< tmp_out.str();
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
				char buffer[1000] = {0};
				do
				{
					input.getline(buffer, sizeof(buffer));
				} while(process_line(buffer));

				output
					<< "};\n"
					<< nl;
			}
			else
			{
				char buffer[1000] = {0};
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
					<< "template<>\nstruct "
					<< font_name << "::Glyphe<" << encoding<< ">\n"
					<< "{\n";
			}
			else if(starts_with(line, "DWIDTH"))
			{
				d_width = atoi(line.c_str()+7);
				output
					<< "\tusing next = Constant<"
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
			}
			else if(starts_with(line, "BITMAP"))
			{
				BitmapParser(
					width,
					height,
					x_offset,
					y_offset,
					input,
					output).run();

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
		process(
			line,
			action(
				"FONT ",
				[this](char const* s, size_t l)
				{
					font_id = strip(s, l);
				}),
			action(
				"COMMENT",
				[this](char const* s, size_t l)
				{
					comments_ << std::string(s, l) << '\n';
				}),
			action(
				"STARTPROPERTIES",
				[this](char const*, size_t)
				{
					current_state = &BdfConverter::properties_;
				}));
	}
	void properties_(std::string const& line)
	{
		process(
			line,
			action(
				"FAMILY_NAME",
				[this](char const* s, size_t l)
				{
					family_name = remove_quotes(s, l);
				}),
			action(
				"WEIGHT_NAME",
				[this](char const* s, size_t l)
				{
					weight = remove_quotes(s, l);
				}),
			action(
				"PIXEL_SIZE",
				[this](char const* s, size_t l)
				{
					pixel_size = strip(s, l);
				}),
			action(
				"COPYRIGHT",
				[this](char const* s, size_t l)
				{
					copy_right_notice = remove_quotes(s, l);
				}),
			action(
				"ENDPROPERTIES",
				[this](char const* s, size_t l)
				{
					std::stringstream tmp;
					tmp << family_name << weight << pixel_size;
					font_name = tmp.str();

					output
						<< start_comment_block
						<< nl
						<< "Fontname: " << font_id << nl;

					print_copyright_notice(
						output,
						"Copyright: ",
						copy_right_notice);

					output
						<< nl
						<< comments_.str()
						<< end_comment_block
						<< nl
						<< "#pragma once\n"
						<< "#include <pixel_display/type/encoding.h>\n"
						<< "#include <pixel_display/type/bit_map.h>\n"
						<< nl
						<< "namespace pixel_display\n"
						<< "{\n\n"
						<< "namespace font\n"
						<< "{\n\n"
						<< "template<int8_t I>\n"
						<< "using Constant = type::Constant<int8_t, I>;\n"
						<< "using namespace pixel_display::literals;\n"
						<< nl
						<< "struct " << family_name << weight << pixel_size << nl
						<< "{\n"
						<< nl
						<< "template<int I>\n"
						<< "struct Glyphe;\n\n"
						<< "};\n\n"
						<< "template<int I>\n"
						<< "static constexpr int get_encoding(Glyphe<I>)\n"
						<< "{\n"
						<< "	return I;\n"
						<< "}\n"
						<< nl;

					current_state = &BdfConverter::chars_;
				}));
	}

	void chars_(std::string const& line)
	{
		process(
			line,
			action(
				"STARTCHAR",
				[this](char const* s, size_t l)
				{
					CharParser(
						std::string(s, l),
						font_name,
						input,
						output).run();
				}));
	}

public:
	BdfConverter(std::istream & input_, std::ostream & output_)
	: current_state(&BdfConverter::find_start_)
	, input(input_)
	, output(output_)
	{}

	void run()
	{
		char buffer[1000] = {0};
		while(not input.eof())
		{
			input.getline(buffer, sizeof(buffer));
			process_line(buffer);
		}

		output
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
