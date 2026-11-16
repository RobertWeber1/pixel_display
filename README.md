# pixel_font

A header-only C++ library that rasterises bitmap fonts into bit-packed byte
buffers **entirely at compile time**. Fonts are template data, glyph tables are
`constexpr` aggregates, and text is rendered by `constexpr` template
metaprogramming: there is no heap allocation, no runtime font parsing, no
virtual dispatch and no font lookup at run time. The output
is a plain `Height × ceil(Width/8)` byte block, ready to be pushed to a
pixel display, an e-ink frame, an LED matrix or a terminal.

The code is [MIT licensed](LICENSE); the vendored font headers carry their own
copyright notices (see [Font attribution](#font-attribution)).

---

## Repository layout

```text
CMakeLists.txt              the whole library: add_library(pixel_font INTERFACE) + include root src
src/pixel_font/             the library; headers are included as <pixel_font/...>
  pixel_font.h              umbrella header
  type/                     dimensions.h, bit_map.h, data.h, encoding.h
  detail/                   index_of.h, string_span.h
  encoding/simple.h         the packing strategy
  font_table.h              glyph table + rendering
  output/buffer.h           the bit-packed output sink
  metrics.h                 text metrics
  utf8.h                    UTF-8 decoding
  fonts/                    helvR10.h, helvR14.h, skinny_clock.h
examples/                   hello_world.cc, utf8_decode.cc
test/                       CMakeLists.txt, helv.cc, font_table.cc, skinny_clock.cc,
                            utf8.cc, util.h, UTF8_decoder_capability_and_stress_test.txt
tools/                      CMakeLists.txt, bdf_converter.cpp
external/fonts/             helvR14.bdf, the BDF input of the converter
build/                      CMake build directory (left over, not checked in)
```

The project name is used consistently in three places: the CMake target is
`pixel_font`, the include root is `src/` (so headers are `<pixel_font/...>`) and
the C++ namespace is `pixel_font::`. The library sources live in
`src/pixel_font/`, which is *inside* the include root, not the include root
itself.

Only the root `CMakeLists.txt` defines the library — it is seven lines and has no
`add_subdirectory`. The executables live one level down: `test/CMakeLists.txt`
declares the test and example targets and pulls the other directories back in with

```cmake
add_subdirectory(../ pixel_font)   # the library target from the repository root
add_subdirectory(../tools tools)   # the bdf_converter target
```

so the build directory has to be configured on `test/`, not on the repository
root — see [Testing](#testing).

---

## Quick start

Requirements, verified on this repository:

* a C++14 compiler. The tree needs **C++14**, not C++11: the `constexpr`
  functions in `utf8.h`, `metrics.h` and `encoding/simple.h` have multi-statement
  bodies, which only C++14 ("relaxed `constexpr`") allows. Tested with
  GCC 15.1.0 and Clang 18 (see [Caveats](#caveats-and-known-issues) — Clang
  rejects part of the tree, GCC is the working compiler).
* `-I src`, because the include root of the library is the `src/` directory and
  every header includes its siblings as `<pixel_font/...>`.

Compile one example directly:

```sh
$ g++ -std=c++14 -Wall -Wextra -Wpedantic -I src examples/hello_world.cc -o hello
$ ./hello
```

Or use the CMake targets. They live in `test/CMakeLists.txt`, so configure on
that directory — configuring on the repository root only defines the header-only
library and yields no executable targets:

```sh
$ cmake -S test -B build
$ cmake --build build --target pixel_font-examples
$ ./build/pixel_font-examples
```

`EXCLUDE_FROM_ALL` was dropped in this layout, so a plain
`cmake --build build` builds the tests and both example programs as well.

Both print the same render:

```text
|                                                                                |
|                                                                                |
|                                                                                |
|  []            []                    []    []                      []          |
|  []            []                    []    []                      []          |
|  []            []                    []    []                      []          |
|  []            []      [][][][]      []    []      [][][][]        []          |
|  []            []    [][]    [][]    []    []    [][]    [][]      []          |
|  [][][][][][][][]    []        []    []    []    []        []      []          |
|  []            []    [][][][][][]    []    []    []        []      []          |
|  []            []    []              []    []    []        []      []          |
|  []            []    []              []    []    []        []                  |
|  []            []    [][]    [][]    []    []    [][]    [][]      []          |
|  []            []      [][][][]      []    []      [][][][]        []          |
36x11
```

### Using the library from another project

`pixel_font` is a header-only `INTERFACE` CMake target whose include root is
`src`, so consumers write `#include <pixel_font/...>` and link `pixel_font`:

```cmake
add_subdirectory(path/to/pixel_font path/to/pixel_font-build)   # defines the pixel_font target

add_executable(my_app main.cc)
target_link_libraries(my_app PRIVATE pixel_font)
```

The path passed to `add_subdirectory` is the **repository root**, whose `CMakeLists.txt`
is now only the seven lines above; the include directory it exports is that
root's `src/`, so `my_app` gets `<pixel_font/...>` for free. There is no
`install()` or packaging yet (see [Roadmap](#roadmap--todo)).

```cpp
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
```

---

## Minimal example

`examples/hello_world.cc` in full:

```cpp
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
```

The three things that matter:

1. **`#include <pixel_font/pixel_font.h>`** is the umbrella header. It pulls
   in the geometry types, the font table machinery, the output buffer, the
   metrics and the fonts that ship with the library
   (`fonts/helvR10.h`, `fonts/skinny_clock.h`).
2. **`MakeFontTable<Font, EncodingStrategy, code points...>`** builds the glyph
   table at compile time. The code point list is the *subset of the font you
   keep in the binary*: every code point becomes one `GlypheInfo` record plus
   its slice of the shared glyph bit blob. Unsupported code points are a
   compile-time decision, not a runtime lookup — see
   [Caveats](#caveats-and-known-issues) for what happens to a code point that
   is not in the list.
3. **`fill_new_buffer<FontTable, Width, Height>(text, pos)`** renders `text`
   with the baseline at `pos` into a `Buffer<Width, Height>` and returns it;
   `print_()` draws it as ASCII (`[]` set, `  ` unset, `|` frame).

---

## Core concepts

### Font type

A font is a struct with a forward-declared nested `Glyphe<ENCODING>` template
plus one specialisation per character. `encoding/simple.h` reads exactly six
member aliases from every glyph:

| Glyph alias | Meaning |
|---|---|
| `width`, `height` | glyph box in pixels (from the BDF `BBX`) |
| `x`, `y` | `dx`/`dy` offsets of the box relative to the baseline pen position |
| `next` | `skip_width`, the pen advance after the glyph (from the BDF `DWIDTH`) |
| `bit_map` | the glyph picture, a `type::BitMap<char...>` |

The generated headers (`src/pixel_font/fonts/*.h`) are machine output —
`fonts/helvR10.h` is 16 843 lines — and should be treated as opaque data.
Hand-written fonts look the same; `test/font_table.cc` defines a minimal one:

```cpp
struct TestFont
{

template<int I>
struct Glyphe;

template<int I>
static constexpr int get_encoding(Glyphe<I>)
{
	return I;
}

};
```

A glyph specialisation provides the aliases as `type::Constant<T, VALUE>`
typedefs and the picture as a `_make_bitmap` literal, where `"[]"` is a set
pixel and `"  "` is an unset one (abridged, from
`src/pixel_font/fonts/skinny_clock.h`):

```cpp
template<>
struct skinny_clock::Glyphe<0x30>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
```

The font struct itself only declares `Glyphe` and the `get_encoding` hook that
`encoding::Simple` uses to recover the code point of a glyph:

```cpp
struct skinny_clock
{

template<int I>
struct Glyphe;

template<int I>
static constexpr int get_encoding(Glyphe<I>)
{
	return I;
}

};
```

### Encoding strategy

`MakeFontTable` is parameterised on the encoding strategy, so the packing
scheme is pluggable. `pixel_font::encoding::Simple` is the only strategy
implemented today. It stores

* one `GlypheInfo` record per glyph, packed with no padding, and
* one shared glyph bit blob, `type::Data<byte_count<GLYPHES...>()>`, in which
  every glyph's rows are stored row-major, LSB-first, and addressed by the
  record's `data_index`. The record itself (abridged):

```cpp
struct GlypheInfo
{
	int16_t code_point;
	uint16_t data_index;
	uint8_t width;
	uint8_t height;
	int8_t dx;
	int8_t dy;
	int8_t skip_width;
```

`Simple` provides the accessors `FontTable` is written against — `get`,
`get_glype_line`, `get_glyphe_mask`, `bit_and`, `has`, `glyph_info_size()`,
`glyph_data_size()` — so a new strategy only has to provide those.

### Output sink

Rendering is duck-typed: `FontTable::render_glyph` only needs an object with
`set(std::array<uint8_t, N>, Point)` (or the `set(data, byte_index, line)`
byte overload) and `next_glyphe(int)`. `output::Buffer<Width, Height>` is the
provided implementation (abridged):

```cpp
template<size_t Width, size_t Height>
struct Buffer
{
	enum {ByteWidth = Width/8 + ((Width%8 != 0) ? 1 : 0)};

	using Line = std::array<uint8_t, ByteWidth>;
	Line buf[Height] = {0};

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, uint16_t byte_index, uint16_t line)
	{
		for(uint16_t i = 0; i < N; ++i)
		{
			auto const index = uint16_t(byte_index+i);
			if(index >= buf[0].size())
				continue;

			buf[line][index] |= data[i];
		}
```

Writing your own sink is therefore a matter of providing those members;
`test/util.h` contains a hand-rolled one used by the tests (abridged):

```cpp
struct TestOutput
{
	using line_buf = std::array<uint8_t, 5>;
	line_buf buf[40] = {0};

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, uint16_t byte_index, uint16_t line)
	{
		for(uint16_t i = 0; i < N; ++i)
		{
			auto const index = uint16_t(byte_index+i);
			if(index >= buf[0].size())
				continue;

			buf[line][index] |= data[i];
		}
	}

	void next_glyphe(int /*code_point*/)
	{

	}
```

### Coordinate system

`X`/`Y` are `int16_t`-valued tagged dimensions, so a coordinate cannot silently
be mixed with a size or with another axis:

```cpp
// template<class T>
using X = Dimension<int16_t, struct XTag>;


// template<class T>
using Y = Dimension<int16_t, struct YTag>;


// template<class T>
using Width = Dimension<int16_t, struct WidthTag>;


// template<class T>
using Height = Dimension<int16_t, struct HeightTag>;


// template<class T>
using Point = Pair< X, Y >;


// template<class T>
using Size = Pair< Width, Height >;

using Outline = Pair<Size, Point>;
```

The origin is the **bottom-left** pixel and `Y` increases upwards.
`render_glyph` places the top-left corner of the glyph box at
`pos + Point{dx, height + dy - 1}` and walks the glyph rows downwards, and
`Buffer::print_()` prints rows from `Height-1` down to `0` (abridged):

```cpp
	void print_()
	{
		for(int i=Height-1; i>=0; --i)
		{
			// std::cout << buf[i] << std::endl;
			std::cout << '|';

			for(auto const& t : buf[i])
			{
				uint8_t mask = 1;
				for(int i=0; i<8; ++i)
				{
					std::cout << ((t&mask)?"[]":"  ");
					mask<<=1;
				}
```

### Bit packing

`ByteWidth = Width/8 + (Width%8 != 0)`; rows are contiguous, and within a byte
the bits are filled LSB-first (which is why `print_()` walks the byte with
`mask = 1; mask <<= 1`). The same LSB-first order is used inside the glyph bit
blob by `encoding::Simple::encode_`.

`Buffer::set` clips writes whose *byte* index is out of range, but it does not
check the *line* index — see [Caveats](#caveats-and-known-issues).

---

## API reference by header

### Umbrella: `pixel_font/pixel_font.h`

Includes everything the library provides, including the bundled fonts:

```cpp
#include <pixel_font/font_table.h>
#include <pixel_font/type/encoding.h>
#include <pixel_font/type/dimensions.h>
#include <pixel_font/fonts/helvR10.h>
#include <pixel_font/fonts/skinny_clock.h>
#include <pixel_font/type/bit_map.h>
#include <pixel_font/detail/index_of.h>
#include <pixel_font/output/buffer.h>
#include <pixel_font/metrics.h>

#include <pixel_font/encoding/simple.h>
```

`fonts/helvR14.h` is **not** part of the umbrella header; include it
explicitly if you want `font::HelveticaMedium20`.

### `pixel_font/type/dimensions.h` — geometry

| Symbol | Description |
|---|---|
| `Dimension<T, TAG>` | scalar with a unit tag; `value` member, `+ - == < != <= > >=`, and `* / %` by an `int` |
| `Pair<T1, T2>` | tagged pair, inherits from both members; `get<T>()` accessors, component-wise `+ - == !=` |
| `get<T>(P const&)` | accessor helper: `static_cast<T>(p)` |
| `X`, `Y` | `Dimension<int16_t, …>` — pixel coordinates |
| `Width`, `Height` | `Dimension<int16_t, …>` — pixel sizes |
| `Point` | `Pair<X, Y>` |
| `Size` | `Pair<Width, Height>` |
| `Outline` | `Pair<Size, Point>` — glyph box plus origin |
| `min(a, b)` | `<=`-based minimum used by the metaprogramming |

### `pixel_font/type/bit_map.h` — glyph pictures

| Symbol | Description |
|---|---|
| `BitMap<char... Cs>` | a glyph picture as a list of characters; `byte_count` is the number of output bytes |
| `bitmap_cat<A, B>` / `bitmap_cat_t` | concatenate two pictures (one separator byte between them) |
| `flatten<...>` / `flatten_t<GLYPHES...>` | concatenate the `bit_map`s of a glyph list |
| `_make_bitmap` | string-literal-operator template that turns `"[]  []"` into a `BitMap`; it is only ever *declared*, never defined, and used inside `decltype(...)` |

### `pixel_font/type/data.h` — byte storage

| Symbol | Description |
|---|---|
| `Data<N, Type = uint8_t>` | fixed-size byte array, `constexpr` `size()`, `operator[]`, copy from `Type const (&)[N]` |

### `pixel_font/type/encoding.h` — compile-time constants

| Symbol | Description |
|---|---|
| `Constant<T, VALUE>` | a typed compile-time integer, read with `value()` |
| `Encoding<VALUE>` | same, specialised for encoding schemes (unused by `Simple`) |

### `pixel_font/encoding/simple.h` — the packing scheme

| Symbol | Description |
|---|---|
| `GlypheInfo` | one glyph record: `code_point`, `data_index`, `width`, `height`, `dx`, `dy`, `skip_width` |
| `make_info<Font, GlypheInfo, T>(offset)` | build a record from a glyph type plus its offset in the bit blob |
| `calc_size(n)`, `calc_buf_size(n)` | `n` pixels → bytes (`n/8` rounded up) |
| `byte_count<GLYPHES...>()` | total size of the glyph bit blob |
| `get_offset<GLYPHE, GLYPHES...>()` | offset of one glyph inside the blob |
| `encode_<Size>(BitMap)`, `encode<GLYPHES...>()` | turn pictures into `Data<N>` |
| `max_glyphe_width<GLYPHES...>()` | widest glyph, sizes the scratch line buffer |
| `byte_mask(w)` | low `w` bits set |
| `shift(array, X)`, `operator\|`, `operator&` | bit-shift and bitwise ops on `std::array` lines |
| `glyphe_mask<Buffer>(width, X)` | clip mask for a glyph at an x offset |
| `begin_byte_index`, `end_byte_index`, `start_offset` | address one row inside the blob |
| `Simple<Font, GLYPHES...>` | the strategy: `has(int)`, `bit_and`, `glyph_info_size()`, `glyph_data_size()`, `LineBuffer_t`, `get_glype_line`, `get_glyphe_mask`, `get(int)`, `infos`, `glyph_data` |

### `pixel_font/font_table.h` — the glyph table

| Symbol | Description |
|---|---|
| `FontTable<Font, Strategy, GLYPHES...>` | inherits the strategy; the public interface below |
| `MakeFontTable<F, Strategy, CodePoints...>` | shorthand: resolves `F::Glyphe<CodePoint>` for every listed code point |
| `count()`, `size()`, `data_size()` | number of glyphs, table size in bytes, bit blob size |
| `bounds(int code_point)` | `Outline` of one glyph: box size plus baseline offsets |
| `glyph_width(int)`, `glyph_height(int)` | advance width and box height |
| `glyph_ascent(int)`, `glyph_descent(int)` | ascent above and descent below the baseline |
| `render_glyph(code_point, pos, output)` | draw one glyph, return the next pen position |
| `render_text(output, pos, StringSpan)` | draw a whole string |

### `pixel_font/output/buffer.h` — the output sink

| Symbol | Description |
|---|---|
| `Buffer<Width, Height>` | `ByteWidth`, `Line`, `buf[Height]`, `set(data, byte_index, line)`, `set(data, Point)`, `next_glyphe(int)`, `print_()`, `print_colls()` |
| `fill_new_buffer<FontTable, Width, Height>(StringSpan, Point)` | render into a fresh `Buffer` and return it |

### `pixel_font/metrics.h` — text metrics

| Symbol | Description |
|---|---|
| `width<FontTable, N>(char const (&)[N])` | sum of the advance widths of a string literal |
| `height<FontTable, N>(char const (&)[N])` | `ascent - descent` |
| `ascent<FontTable, N>(char const (&)[N])` | highest point above the baseline |
| `descent<FontTable, N>(char const (&)[N])` | lowest point below the baseline (`<= 0`) |

All four are `constexpr` and take a `char const (&)[N]` **array**, not a
pointer, so the length is part of the type.

Measuring a string before rendering it is what sizes the buffer;
`test/helv.cc` does exactly that:

```cpp
auto constexpr w = pixel_font::width<HelveticaMedium14_t>(credits);
auto constexpr h = pixel_font::height<HelveticaMedium14_t>(credits);
auto constexpr desc = pixel_font::descent<HelveticaMedium14_t>(credits);
auto constexpr asc = pixel_font::ascent<HelveticaMedium14_t>(credits);
```

### `pixel_font/utf8.h` — text decoding

| Symbol | Description |
|---|---|
| `Result` | `Invalid`, `End`, `EncodingError`, `Ok` |
| `Stream` | `head`, `end`, `code_point`, `result`; constructible from a string literal, a `char const*`, or a `char const*` plus a length |
| `decode_utf8(Stream, uint32_t default_value)` | one decoding step; returns the mutated stream |
| `get_codepoint(char const*, size_t, size_t&)` | wrapper used by `render_text`: decode at `u`, advance `i` by the bytes consumed |

```cpp
enum class Result
{
	Invalid,
	End,
	EncodingError,
	Ok
};
```

### Helpers

| Symbol | Header | Description |
|---|---|---|
| `detail::StringSpan` | `detail/string_span.h` | non-owning view of a string: `std::string`, a `char const (&)[N]` array or a `char const*` |
| `detail::TypeList`, `detail::get_type_index`, `detail::index_of<Type, Types...>` | `detail/index_of.h` | compile-time position of a type in a list, used to place glyphs inside the bit blob |

---

## Metrics

`metrics.h` measures a string without rendering it, so a buffer can be sized
at compile time. `height` is by definition `ascent - descent` (see the
implementation below), and `descent` is `<= 0`.

Note that the metrics loop over **bytes**, not code points:

```cpp
template<class FontTable, size_t N>
constexpr size_t height(char const (&data)[N])
{
	int ascent = 0;
	int descent = 0;

	for(size_t  i = 0; i<N-1; ++i)
	{
		ascent = std::max<int>(ascent, FontTable::glyph_ascent(data[i]).value);
		descent = std::min<int>(descent, FontTable::glyph_descent(data[i]).value);
	}

	return ascent - descent;
}
```

For a UTF-8 string, every byte of a multi-byte character is looked up
separately, which lands on the `Simple::get` fallback. Keep metrics to
single-byte code points, or measure the string you can actually render.

---

## UTF-8 decoding

`decode_utf8` is a step function. It takes a `Stream` and returns the mutated
`Stream`; the next step is taken by feeding that result back in. A fresh
`Stream` starts with `result == Result::Invalid`.

```cpp
void decode_all(char const* text)
{
	auto stream = pixel_font::decode_utf8(text, replacement);

	for(;;)
	{
		std::cout
			<< "  " << result_name(stream.result)
			<< " 0x" << std::hex << std::setw(4) << std::setfill('0')
			<< stream.code_point
			<< std::setfill(' ') << std::dec << std::endl;

		if(stream.result == pixel_font::Result::End)
			break;

		// decode_utf8 returns the mutated stream: feed it back in.
		// get_codepoint(...) in FontTable::render_text does the same walk.
		stream = pixel_font::decode_utf8(stream, replacement);
	}
}
```

`examples/utf8_decode.cc` walks a set of interesting inputs:

```cpp
int main()
{
	char const* const inputs[] =
	{
		"test",             // four ASCII characters
		"\xC3\xA4",         // 'ä'
		"\xE2\x82\xAC",     // '€'
		"\xF0\x9F\x98\x80", // U+1F600
		"\xC0\xAF",         // overlong encoding of '/'
		"\xED\xA0\x80",     // UTF-16 surrogate half
		"\x80",             // stray continuation byte
		"\xF8"              // invalid lead byte
	};

	for(char const* text : inputs)
	{
		print_bytes(text);
		decode_all(text);
	}

	return 0;
}
```

Output:

```text
 0x74 0x65 0x73 0x74
  Ok 0x0074
  Ok 0x0065
  Ok 0x0073
  Ok 0x0074
  End 0x003f
 0xc3 0xa4
  Ok 0x00e4
  End 0x003f
 0xe2 0x82 0xac
  Ok 0x20ac
  End 0x003f
 0xf0 0x9f 0x98 0x80
  Ok 0x1f600
  End 0x003f
 0xc0 0xaf
  Ok 0x002f
  End 0x003f
 0xed 0xa0 0x80
  EncodingError 0x003f
  EncodingError 0x003f
  End 0x003f
 0x80
  EncodingError 0x003f
  End 0x003f
 0xf8
  EncodingError 0x003f
  End 0x003f
```

Acceptance rules, read off `decode_utf8`:

| Lead byte | Sequence | Result |
|---|---|---|
| `0x00–0x7F` | 1 byte | `Ok`, code point = the byte |
| `0xC0–0xDF` | 2 bytes | `Ok`, `((u0-192)<<6) + (u1-128)` |
| `0xE0–0xEF` | 3 bytes | `Ok`, `((u0-224)<<12) + ((u1-128)<<6) + (u2-128)` |
| `0xF0–0xF7` | 4 bytes | `Ok`, `((u0-240)<<18) + ((u1-128)<<12) + ((u2-128)<<6) + (u3-128)` |
| `0xED` with `(u1 & 0xA0) == 0xA0` | — | `EncodingError` (UTF-16 surrogate halves `U+D800`–`U+DFFF` are rejected) |
| anything else (`0x80–0xBF`, `0xF8–0xFF`) | — | `EncodingError` |
| truncated at end of input | — | `EncodingError`, `code_point = default_value` |
| input exhausted | — | `End`, `code_point = default_value` |

Known non-safety gaps (verified, not theoretical):

* **Overlong encodings are accepted.** `0xC0 0xAF` decodes as `Ok` to `U+002F`
  (`/`), and `0xE0 0x80 0x80` decodes to `U+0000`. A Unicode-safe decoder
  rejects both.
* **Invalid lead bytes still consume bytes.** The decoder walks forward through
  the continuation bytes it has already read, so one malformed sequence can
  swallow up to four input bytes — that is why the stray `0x80` in the example
  above produces two `EncodingError` steps.
* Continuation bytes are not range-checked (`0x80–0xBF` is assumed, not
  verified).

`test/UTF8_decoder_capability_and_stress_test.txt` is Markus Kuhn's
"UTF-8 decoder capability and stress test" file; it is the reference input for
evaluating the decoder against these gaps.

---

## Adding a font (BDF pipeline)

Fonts come from X11 **BDF** files. `tools/bdf_converter.cpp` converts one BDF
into one generated header:

```sh
$ cmake --build build --target bdf_converter
$ ./build/tools/bdf_converter external/fonts/helvR14.bdf            # to stdout
$ ./build/tools/bdf_converter external/fonts/helvR14.bdf helvR14.h  # to a file
```

`tools/CMakeLists.txt` is reached from `test/CMakeLists.txt` with
`add_subdirectory(../tools tools)`, and its source path is relative to `tools/`,
so the binary lands in `build/tools/`, not in `build/`.

What it does:

* waits for `STARTFONT`, then reads `FONT` (the font name comment) and every
  `COMMENT` line;
* reads the properties `FAMILY_NAME`, `WEIGHT_NAME`, `PIXEL_SIZE` and
  `COPYRIGHT`, and names the generated struct
  `family_name + weight_name + pixel_size` — for `external/fonts/helvR14.bdf`
  that is `Helvetica` + `Medium` + `20` = `font::HelveticaMedium20`;
* wraps the BDF `COPYRIGHT` notice at 80 columns into the header's leading
  comment block, followed by the collected `COMMENT` lines;
* emits one `Glyphe<ENCODING>` specialisation per `STARTCHAR`, skipping
  duplicate `STARTCHAR` names and duplicate `ENCODING` numbers, and converts
  the hex `BITMAP` rows into `"[]"`/`"  "` picture strings;
* writes `#include <pixel_font/type/encoding.h>` and
  `#include <pixel_font/type/bit_map.h>` plus the `namespace pixel_font` wrapper
  (and `using namespace pixel_font::literals;`, which the `"[]"_make_bitmap`
  literals in the glyph bodies need).

The regeneration is byte-exact for the checked-in sample:

```sh
$ cmake --build build --target bdf_converter
$ ./build/tools/bdf_converter external/fonts/helvR14.bdf /tmp/helvR14.h
$ diff /tmp/helvR14.h src/pixel_font/fonts/helvR14.h   # no output
```

Note that the **file name and the struct name do not match**: `fonts/helvR10.h`
holds `font::HelveticaMedium14` (the 100 dpi X11 font, `PIXEL_SIZE 14`) and
`fonts/helvR14.h` holds `font::HelveticaMedium20` (the 140 dpi font,
`PIXEL_SIZE 20`). Read the `Fontname:` line in the header comment, not the file
name.

Then wire the new font into a table by listing the code points you need:

```cpp
#include <catch2/catch_test_macros.hpp>
#include <pixel_font/pixel_font.h>
#include <pixel_font/encoding/simple.h>
#include <pixel_font/fonts/helvR14.h>
#include <util.h>
#include <unistd.h>


using SkinnyClock_t =
	pixel_font::MakeFontTable<
		pixel_font::font::skinny_clock,
		pixel_font::encoding::Simple,
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
```

The generated header needs no build wiring: the library is header-only, so putting
it in `src/pixel_font/fonts/` and including it is enough.

---

## Testing

Catch2 v3 is fetched by CMake rather than vendored, and the test binary links
`Catch2::Catch2WithMain`, which provides `main()`:

```cmake
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1 # or a later release
)


FetchContent_MakeAvailable(Catch2)
```

All four test sources are in the target, and `EXCLUDE_FROM_ALL` was dropped, so
the tests are built by a plain `cmake --build build`. The sources are listed
without a directory prefix because `test/CMakeLists.txt` sits next to them:

```cmake
add_executable( test-pixel_font
	helv.cc
	font_table.cc
	skinny_clock.cc
	utf8.cc
)

target_include_directories( test-pixel_font
	PRIVATE .
)

target_link_libraries( test-pixel_font
	PRIVATE Catch2::Catch2WithMain
	PRIVATE pixel_font
)

target_compile_options( test-pixel_font
	PRIVATE -std=c++14
)
```

`test/util.h` provides the `ostream` operators and the `Data<N>` comparison
helpers the tests use; the tests include it as `<util.h>`, which is why the target
adds `.` to its include directories. Configuring the project needs network access
the first time, because CMake clones Catch2 into `build/`; afterwards it is fully
local. Configure on `test/`, not on the repository root:

```sh
$ cmake -S test -B build
$ cmake --build build --target test-pixel_font
$ ./build/test-pixel_font
```

The old `build/` directory in this checkout was configured on the pre-refactor
layout and still contains `test-pixel_display` and `pixel_display-examples`; it
has to be re-configured (and there is no `.gitignore`, so `build/` shows up as
untracked noise in `git status`).

The two font tests animate to stdout, so the interesting line is the last one:

```text
All tests passed (136 assertions in 12 test cases)
```

---

## Caveats and Known Issues

Everything below was verified by building the tree.

**Repaired in this checkout** (the committed tree did not compile at all):

* `src/pixel_font/utf8.h` contained a stray statement `inpunnput;` in the
  "3-byte sequence truncated at end of input" branch of `decode_utf8`. It is an
  undeclared identifier; it was replaced by the same truncation branch the other
  cases use (`code_point = default_value`, `result = EncodingError`, `return`).
* `FontTable::render_text` calls `get_codepoint(...)`, which no longer existed
  anywhere in the tree: the last commit replaced the imperative
  `get_codepoint` decoder in `utf8.h` with the `constexpr` `decode_utf8` one and
  dropped the wrapper. It was restored in `utf8.h` as a thin `inline` wrapper
  around `decode_utf8` so there is a single decoder implementation. The `inline`
  matters: several test translation units include `utf8.h`, and without it the
  link fails with a duplicate definition.
* `tools/bdf_converter.cpp` used `uint8_t` without including `<stdint.h>`; the
  include was added so the documented BDF pipeline actually builds.
* The vendored Catch2 v2 (`test/catch.h`, `test/catch.cc`) was replaced by
  Catch2 v3 fetched with `FetchContent`. That also removes the
  `char altStackMem[SIGSTKSZ]` array that modern glibc rejects, and the tests
  now link `Catch2::Catch2WithMain` instead of defining `main()` themselves.
* `test/util.h` used `std::array` without including `<array>`; the include was
  added.
* The layout refactor renamed the directory (`src/pixel_display/` →
  `src/pixel_font/`), the namespace (`pixel_display` → `pixel_font`) and the
  executable targets (`test-pixel_display` → `test-pixel_font`,
  `pixel_display-examples` → `pixel_font-examples`), and split the test and tool
  build files out of the root `CMakeLists.txt` into `test/CMakeLists.txt` and
  `tools/CMakeLists.txt`. Two things the refactor left behind were repaired here:
  `tools/bdf_converter.cpp` still emitted `#include <pixel_display/...>`,
  `namespace pixel_display`, `using namespace pixel_display::literals;` and
  `} //namespace pixel_display` — renamed to `pixel_font`, which makes the
  regeneration of `fonts/helvR14.h` byte-exact again — and `tools/CMakeLists.txt`
  was orphaned with a source path relative to the repository root; it now names
  `bdf_converter.cpp` and is reached from `test/CMakeLists.txt` with
  `add_subdirectory(../tools tools)`. The library target name `pixel_font` and the
  include root `src` did not change.
* The `-std=c++14` line in `target_compile_options( test-pixel_font ... )`
  was commented out; it is now enabled, so the tests are pinned to C++14.
* `test/helv.cc` called `pixel_font::output::render_buffer`, which no longer
  exists. The call site already passed `fill_new_buffer`'s arguments, so it was
  renamed to `fill_new_buffer` and the file was enabled in the test target.

**Still broken, documented rather than fixed:**

* **Configuring on the repository root builds nothing.** The root `CMakeLists.txt`
  only defines the `pixel_font` `INTERFACE` target; the test, example and tool
  targets are reachable only through `test/CMakeLists.txt`. This is deliberate —
  it keeps `add_subdirectory`ing the tree cheap for consumers — but it means
  `-S .` is never the right command here.
* **Compiler dialect.** `encoding/simple.h` uses `__attribute__((packed))` on
  `GlypheInfo`, which is GCC/Clang-only; MSVC is not supported. In addition,
  Clang 18 rejects the tree with `-Winvalid-constexpr`: the `constexpr`
  `Stream(char const*)` constructor calls the non-`constexpr` `std::strlen`.
  GCC 15.1.0 accepts it. Use GCC.
* **`-std=c++11` does not work.** The `constexpr` functions have multi-statement
  bodies, which C++11 forbids ("body of a `constexpr` function must be a single
  `return` statement"); C++14 relaxed `constexpr` is the floor.
* **`-Wpedantic` is noisy.** Compiling anything that includes a font header emits
  two warnings about GNU string-literal-operator templates with a character
  pack argument (`_make_bitmap` in `type/bit_map.h`, `_buf` in `test/util.h`).
* **Missing glyphs are silent.** `encoding::Simple::get(code_point)` returns
  `infos[0]` when the code point is not in the table, so an unlisted code point
  renders as the first glyph in the table (the `.notdef` box when `0` is listed
  first, as `fonts/helvR10.h` and `fonts/helvR14.h` do) instead of failing.
  `Simple::has(code_point)` is the runtime check if you need one.
* **Only listed code points work.** `MakeFontTable` resolves
  `Font::Glyphe<CodePoint>`, so a code point that the font header does not
  define is a compile error; a code point the font defines but that is not
  listed is a runtime fallback to glyph 0.
* **`Buffer::print_colls()` hardcodes 14 lines** (`for(int line = 0; line < 14; ...)`)
  regardless of `Height`, and reads `buf[line]` unconditionally.
* **Out-of-range writes are only half-checked.** `Buffer::set` skips bytes whose
  byte index is `>= ByteWidth`, but the line index is used unchecked: rendering
  with a negative `Y` writes out of bounds and crashes.
* **`Buffer::print_()` prints `ByteWidth * 8` cells per row**, i.e. it is wider
  than `Width` whenever `Width % 8 != 0`.
* **`_make_bitmap` and `_buf` are declared, never defined.** They only appear
  inside `decltype(...)`/`sizeof...` contexts, so the literal operators never run;
  they are GNU string-literal-operator templates and are flagged by `-Wpedantic`.

---

## Roadmap / TODO

Documented gaps in the current design:

* Only one encoding strategy (`encoding::Simple`) exists; the interface is
  parameterised for more, but none is implemented.
* No kerning, no shaping, no wrapping: text advances linearly by `skip_width`.
* No runtime font selection — the font table is a type, chosen at compile time.
* No scaling, rotation or subpixel positioning; glyphs are the design size.
* No colour planes and no multi-layer compositing; the sink is one bit plane.
* The UTF-8 decoder is not overlong-safe and does not validate continuation
  bytes (see [UTF-8 decoding](#utf-8-decoding)).
* Nothing yet covers clipping, `print_colls()` or the metrics helpers, and the
  font tests only exercise the two bundled fonts.
* `bdf_converter` is the only font tooling: there is no subsetter, no
  "generate a table for this code point list" tool, and no way to combine
  several fonts into one table.
* No `install()`/packaging for the `pixel_font` target; consumers
  `add_subdirectory` the tree or copy the `INTERFACE` target definition.
* The build is split across `CMakeLists.txt`, `test/CMakeLists.txt` and
  `tools/CMakeLists.txt`; `test/` is the only entry point, so a top-level
  `cmake -S . -B build` still builds nothing. A `.gitignore` for `build/` is also
  missing.

---

## License

The code in this repository is MIT licensed — see [LICENSE](LICENSE).

## Font attribution

The generated font headers are not MIT licensed: `fonts/helvR10.h` and `fonts/helvR14.h`
carry the Adobe/Digital Equipment Corporation notice from the BDF
(`-Adobe-Helvetica-Medium-R-Normal--…-ISO10646-1`, ISO10646-1 extension by
Markus Kuhn). `bdf_converter`
copies the `COPYRIGHT` property of the BDF into the generated header, wrapped at
80 columns — generated headers must keep that block. `fonts/skinny_clock.h`
carries no copyright notice of its own.

```cpp
/*******************************************************************************

Fontname: -Adobe-Helvetica-Medium-R-Normal--14-100-100-100-P-76-ISO10646-1
Copyright: Copyright (c) 1984, 1987 Adobe Systems Incorporated. All Rights
           Reserved. Copyright (c) 1988, 1991 Digital Equipment Corporation.

 ISO10646-1 extension by Markus Kuhn <mkuhn@acm.org>, 2001-03-20

 +
  Copyright 1984-1989, 1994 Adobe Systems Incorporated.
  Copyright 1988, 1994 Digital Equipment Corporation.
```
