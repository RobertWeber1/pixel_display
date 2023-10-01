#include <pixel_display/pixel_font.h>
#include <pixel_display/encoding/simple.h>
#include <pixel_display/fonts/helvR14.h>
#include <util.h>
#include <catch.h>
#include <unistd.h>


using SkinnyClock_t =
	pixel_display::MakeFontTable<
		pixel_display::font::skinny_clock,
		pixel_display::encoding::Simple,
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
		':'>;

TEST_CASE("render glyphe")
{
	pixel_display::type::Point pos{
		pixel_display::type::X{0},
		pixel_display::type::Y{0}};

	uint8_t hour = 0;
	uint8_t minute = 0;
	for(int i=0; i<(24*60); ++i)
	{
		char buffer[6];
		snprintf(buffer, 8, "%02d:%02d", hour, minute);
		puts("\033[2J");
		pixel_display::output::fill_new_buffer<SkinnyClock_t, 24, 14>(buffer, pos).print_();
		usleep(1000);
		minute++;

		if(minute == 60)
		{
			minute = 0;
			hour++;
		}

		if(hour == 24)
		{
			break;
		}
	}

	printf("glyph_info_size: %ld byte\n", SkinnyClock_t::glyph_info_size());
	printf("glyph_data_size: %ld byte\n", SkinnyClock_t::glyph_data_size());
}
