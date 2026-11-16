// pixel_font quick start: render a string into a bit packed buffer
// and print it to the console.
//
//   g++ -std=c++14 -Wall -Wextra -Wpedantic -I src examples/hello_world.cc -o hello

#include <pixel_font/pixel_font.h>
#include <pixel_font/encoding/simple.h>
#include <pixel_font/fonts/helvR10.h>

// HelveticaMedium14 lives in pixel_font/fonts/helvR10.h and is pulled in
// by the umbrella header pixel_font/pixel_font.h.
using Hello_t =
	pixel_font::MakeFontTable<
		pixel_font::font::HelveticaMedium14,
		pixel_font::encoding::Simple,
		'H', 'e', 'l', 'o', '!'>;

constexpr char text[] = "Hello!";

// metrics.h measures a string without rendering it.
constexpr size_t text_width = pixel_font::width<Hello_t>(text);
constexpr size_t text_height = pixel_font::height<Hello_t>(text);

int main()
{
	// Buffer<Width, Height> stores Height rows of ceil(Width/8) bytes each.
	// fill_new_buffer renders `text` with the baseline at (0, 0) and returns
	// the finished buffer; print_() draws set pixels as "[]" and clear ones
	// as "  ", starting with the top line.
	pixel_font::output::fill_new_buffer<Hello_t, 40, 14>(
		text,
		pixel_font::type::Point{
			pixel_font::type::X{0},
			pixel_font::type::Y{0}}).print_();

	std::cout << text_width << 'x' << text_height << std::endl;

	return 0;
}
