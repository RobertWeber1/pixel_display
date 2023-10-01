#include <pixel_display/pixel_font.h>
#include <pixel_display/encoding/simple.h>
#include <pixel_display/fonts/helvR14.h>
#include <catch.h>
#include <unistd.h> //usleep

using HelveticaMedium14_t =
	pixel_display::MakeFontTable<
		pixel_display::font::HelveticaMedium14,
		pixel_display::encoding::Simple,
		0,
		' ',
		'!',
		'"',
		'#',
		'$',
		'%',
		'&',
		'\'',
		'(',
		')',
		'*',
		'+',
		',',
		'-',
		'.',
		'/',
		'0',
		'1',
		'2',
		'3',
		'4',
		'5',
		'6',
		'7',
		'8',
		'9',
		':',
		';',
		'<',
		'=',
		'>',
		'?',
		'@',
		'A',
		'B',
		'C',
		'D',
		'E',
		'F',
		'G',
		'H',
		'I',
		'J',
		'K',
		'L',
		'M',
		'N',
		'O',
		'P',
		'Q',
		'R',
		'S',
		'T',
		'U',
		'V',
		'W',
		'X',
		'Y',
		'Z',
		'[',
		'\\',
		']',
		'^',
		'_',
		'`',
		'a',
		'b',
		'c',
		'd',
		'e',
		'f',
		'g',
		'h',
		'i',
		'j',
		'k',
		'l',
		'm',
		'n',
		'o',
		'p',
		'q',
		'r',
		's',
		't',
		'u',
		'v',
		'w',
		'x',
		'y',
		'z',
		'{',
		'|',
		'}',
		'~',
		U'ö',
		U'Ö',
		U'ä',
		U'Ä',
		U'ü',
		U'Ü',
		U'ß'>;



constexpr char credits[] =
	"Alles Gute wünschen dir "
	"Babett | "
	"Cornelius | "
	"Daniela | "
	"Dorothea | "
	"Erik | "
	"Hansen | "
	"Holger | "
	"Jens H | "
	"Jörg | "
	"Karli | "
	"Karsten M | "
	"Katharina | "
	"Kathrin | "
	"Katrin | "
	"Klaus B | "
	"Lissy | "
	"Martin B | "
	"Martin H | "
	"Michael N | "
	"Nikolas | "
	"Petra | "
	"Ralf D | "
	"Ralf N | "
	"Ralf S | "
	"Rico B | "
	"Rico T | "
	"Robert P | "
	"Stefan M | "
	"Steffen K | "
	"Thomas K | "
	"Udo G | "
	"Robert W |";

auto constexpr w = pixel_display::width<HelveticaMedium14_t>(credits);
auto constexpr h = pixel_display::height<HelveticaMedium14_t>(credits);
auto constexpr desc = pixel_display::descent<HelveticaMedium14_t>(credits);
auto constexpr asc = pixel_display::ascent<HelveticaMedium14_t>(credits);


TEST_CASE("render credits")
{
	puts("\033[H");
	for(int16_t i = 0; i>-int16_t(w); --i)
	{
		pixel_display::output::render_buffer<HelveticaMedium14_t, 20, 14>(
			credits,
			pixel_display::type::Point{
				pixel_display::type::X{i},
				pixel_display::type::Y{3}}).print_();
		puts("\033[H");
		usleep(10);
	}
}
