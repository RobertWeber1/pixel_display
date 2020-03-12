#pragma once
#include <pixel_display/type/encoding.h>
#include <pixel_display/type/dimensions.h>


namespace pixel_display
{

namespace font
{

struct HelveticaMedium20
{

template<class T>
struct lockup;

struct char0
{
	using encoding = type::Encoding<0>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][23] = {
		"[]  []  []  []  []  []",
		"                      ",
		"[]                  []",
		"                      ",
		"[]                  []",
		"                      ",
		"[]                  []",
		"                      ",
		"[]                  []",
		"                      ",
		"[]                  []",
		"                      ",
		"[]  []  []  []  []  []"};
};

template<>
struct lockup<char0::encoding>
{
	using glyph = char0;
};

struct space
{
	using encoding = type::Encoding<32>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<space::encoding>
{
	using glyph = space;
};

struct exclam
{
	using encoding = type::Encoding<33>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[]  ",
		"[]  ",
		"    ",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<exclam::encoding>
{
	using glyph = exclam;
};

struct quotedbl
{
	using encoding = type::Encoding<34>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{9}};
	static constexpr char bitmap[5][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"[][]  [][]",
		"[][]  [][]",
		"[][]  [][]"};
};

template<>
struct lockup<quotedbl::encoding>
{
	using glyph = quotedbl;
};

struct numbersign
{
	using encoding = type::Encoding<35>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][21] = {
		"        []    []    ",
		"        []    []    ",
		"        []    []    ",
		"  [][][][][][][][][]",
		"  [][][][][][][][][]",
		"      []    []      ",
		"      []    []      ",
		"      []    []      ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"    []    []        ",
		"    []    []        ",
		"    []    []        "};
};

template<>
struct lockup<numbersign::encoding>
{
	using glyph = numbersign;
};

struct dollar
{
	using encoding = type::Encoding<36>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][19] = {
		"        []        ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"[][]    []  [][]  ",
		"[][]    []        ",
		"[][][]  []        ",
		"  [][][][]        ",
		"    [][][][][]    ",
		"        [][][][]  ",
		"        []    [][]",
		"[][]    []    [][]",
		"[][][]  []  [][][]",
		"  [][][][][][][]  ",
		"    [][][][][]    ",
		"        []        ",
		"        []        "};
};

template<>
struct lockup<dollar::encoding>
{
	using glyph = dollar;
};

struct percent
{
	using encoding = type::Encoding<37>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][29] = {
		"  [][][][]        [][]      ",
		"[][]    [][]    [][]        ",
		"[][]    [][]    [][]        ",
		"[][]    [][]  [][]          ",
		"[][]    [][]  [][]          ",
		"  [][][][]  [][]            ",
		"            [][]            ",
		"          [][]    [][][][]  ",
		"          [][]  [][]    [][]",
		"        [][]    [][]    [][]",
		"        [][]    [][]    [][]",
		"      [][]      [][]    [][]",
		"      [][]        [][][][]  "};
};

template<>
struct lockup<percent::encoding>
{
	using glyph = percent;
};

struct ampersand
{
	using encoding = type::Encoding<38>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][25] = {
		"    [][][][]            ",
		"  [][][][][][]          ",
		"  [][]    [][]          ",
		"  [][]    [][]          ",
		"    [][][][]            ",
		"  [][][][][]            ",
		"[][][]  [][][]  [][]    ",
		"[][]      [][]  [][]    ",
		"[][]        [][][][]    ",
		"[][]        [][][]      ",
		"[][][]    [][][][][]    ",
		"  [][][][][][]  [][][]  ",
		"    [][][][]      [][][]"};
};

template<>
struct lockup<ampersand::encoding>
{
	using glyph = ampersand;
};

struct quotesingle
{
	using encoding = type::Encoding<39>;
	static constexpr auto next = type::Width{3};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][3] = {
		"[]",
		"[]",
		"[]",
		"[]",
		"[]"};
};

template<>
struct lockup<quotesingle::encoding>
{
	using glyph = quotesingle;
};

struct parenleft
{
	using encoding = type::Encoding<40>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"      []",
		"    [][]",
		"  [][]  ",
		"  [][]  ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"  [][]  ",
		"  [][]  ",
		"    [][]",
		"      []"};
};

template<>
struct lockup<parenleft::encoding>
{
	using glyph = parenleft;
};

struct parenright
{
	using encoding = type::Encoding<41>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"[]      ",
		"[][]    ",
		"  [][]  ",
		"  [][]  ",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"  [][]  ",
		"  [][]  ",
		"[][]    ",
		"[]      "};
};

template<>
struct lockup<parenright::encoding>
{
	using glyph = parenright;
};

struct asterisk
{
	using encoding = type::Encoding<42>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{7}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{7}};
	static constexpr char bitmap[7][11] = {
		"    []    ",
		"[]  []  []",
		"[][][][][]",
		"    []    ",
		"[][][][][]",
		"[]  []  []",
		"    []    "};
};

template<>
struct lockup<asterisk::encoding>
{
	using glyph = asterisk;
};

struct plus
{
	using encoding = type::Encoding<43>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<plus::encoding>
{
	using glyph = plus;
};

struct comma
{
	using encoding = type::Encoding<44>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[5][5] = {
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<comma::encoding>
{
	using glyph = comma;
};

struct hyphen
{
	using encoding = type::Encoding<45>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][11] = {
		"[][][][][]"};
};

template<>
struct lockup<hyphen::encoding>
{
	using glyph = hyphen;
};

struct period
{
	using encoding = type::Encoding<46>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[2][5] = {
		"[][]",
		"[][]"};
};

template<>
struct lockup<period::encoding>
{
	using glyph = period;
};

struct slash
{
	using encoding = type::Encoding<47>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][11] = {
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"    [][]  ",
		"    [][]  ",
		"    [][]  ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      "};
};

template<>
struct lockup<slash::encoding>
{
	using glyph = slash;
};

struct zero
{
	using encoding = type::Encoding<48>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"  [][]    [][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<zero::encoding>
{
	using glyph = zero;
};

struct one
{
	using encoding = type::Encoding<49>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[13][11] = {
		"      [][]",
		"[][][][][]",
		"[][][][][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]"};
};

template<>
struct lockup<one::encoding>
{
	using glyph = one;
};

struct two
{
	using encoding = type::Encoding<50>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"[][][][][][][]  ",
		"[][]        [][]",
		"            [][]",
		"          [][][]",
		"        [][][]  ",
		"      [][][]    ",
		"    [][][]      ",
		"  [][][]        ",
		"[][][]          ",
		"[][]            ",
		"[][][][][][][][]",
		"[][][][][][][][]"};
};

template<>
struct lockup<two::encoding>
{
	using glyph = two;
};

struct three
{
	using encoding = type::Encoding<51>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][][]  ",
		"  [][][][][][][]",
		"[][]        [][]",
		"[][]        [][]",
		"          [][]  ",
		"      [][][]    ",
		"      [][][][]  ",
		"          [][][]",
		"            [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<three::encoding>
{
	using glyph = three;
};

struct four
{
	using encoding = type::Encoding<52>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][19] = {
		"            [][]  ",
		"          [][][]  ",
		"        [][][][]  ",
		"      [][]  [][]  ",
		"    [][]    [][]  ",
		"    [][]    [][]  ",
		"  [][]      [][]  ",
		"[][]        [][]  ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"            [][]  ",
		"            [][]  ",
		"            [][]  "};
};

template<>
struct lockup<four::encoding>
{
	using glyph = four;
};

struct five
{
	using encoding = type::Encoding<53>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"[][][][][][][]  ",
		"[][][][][][][]  ",
		"[][]            ",
		"[][]            ",
		"[][][][][][]    ",
		"[][][][][][][]  ",
		"[][]      [][][]",
		"            [][]",
		"            [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][]  ",
		"  [][][][][]    "};
};

template<>
struct lockup<five::encoding>
{
	using glyph = five;
};

struct six
{
	using encoding = type::Encoding<54>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]  [][][]    ",
		"[][][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][][]      [][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<six::encoding>
{
	using glyph = six;
};

struct seven
{
	using encoding = type::Encoding<55>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"[][][][][][][][]",
		"[][][][][][][][]",
		"            [][]",
		"          [][]  ",
		"        [][]    ",
		"        [][]    ",
		"      [][]      ",
		"      [][]      ",
		"    [][]        ",
		"    [][]        ",
		"  [][]          ",
		"  [][]          ",
		"  [][]          "};
};

template<>
struct lockup<seven::encoding>
{
	using glyph = seven;
};

struct eight
{
	using encoding = type::Encoding<56>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][][]    [][][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][][][][][]  ",
		"[][][]    [][][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][][]    [][][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<eight::encoding>
{
	using glyph = eight;
};

struct nine
{
	using encoding = type::Encoding<57>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]      [][][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][][][][][][]",
		"    [][][]  [][]",
		"            [][]",
		"            [][]",
		"[][]      [][]  ",
		"[][][][][][][]  ",
		"  [][][][][]    "};
};

template<>
struct lockup<nine::encoding>
{
	using glyph = nine;
};

struct colon
{
	using encoding = type::Encoding<58>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<colon::encoding>
{
	using glyph = colon;
};

struct semicolon
{
	using encoding = type::Encoding<59>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<semicolon::encoding>
{
	using glyph = semicolon;
};

struct less
{
	using encoding = type::Encoding<60>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{9}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[9][17] = {
		"            [][]",
		"        [][][][]",
		"    [][][][]    ",
		"  [][][]        ",
		"[][]            ",
		"  [][][]        ",
		"    [][][][]    ",
		"        [][][][]",
		"            [][]"};
};

template<>
struct lockup<less::encoding>
{
	using glyph = less;
};

struct equal
{
	using encoding = type::Encoding<61>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{2}};
	static constexpr char bitmap[5][15] = {
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<equal::encoding>
{
	using glyph = equal;
};

struct greater
{
	using encoding = type::Encoding<62>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{9}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[9][17] = {
		"[][]            ",
		"[][][][]        ",
		"    [][][][]    ",
		"        [][][]  ",
		"            [][]",
		"        [][][]  ",
		"    [][][][]    ",
		"[][][][]        ",
		"[][]            "};
};

template<>
struct lockup<greater::encoding>
{
	using glyph = greater;
};

struct question
{
	using encoding = type::Encoding<63>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"  [][][][][]  ",
		"[][][][][][][]",
		"[][]      [][]",
		"[][]      [][]",
		"        [][][]",
		"      [][][]  ",
		"    [][][]    ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"              ",
		"              ",
		"    [][]      ",
		"    [][]      "};
};

template<>
struct lockup<question::encoding>
{
	using glyph = question;
};

struct at
{
	using encoding = type::Encoding<64>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][33] = {
		"            [][][][][][]        ",
		"        [][][][][][][][][][]    ",
		"      [][][]            [][][]  ",
		"    [][]                  [][]  ",
		"  [][]      [][][][]  []    [][]",
		"  [][]    [][][]  [][][]    [][]",
		"[][]      [][]      [][]    [][]",
		"[][]    [][]      [][]      [][]",
		"[][]    [][]      [][]    [][]  ",
		"[][]    [][]      [][]    [][]  ",
		"[][]    [][]    [][]    [][]    ",
		"[][]    [][][][][][][][][]      ",
		"  [][]    [][][]  [][][]        ",
		"  [][][]                        ",
		"    [][][]                      ",
		"      [][][][][][][][][]        ",
		"          [][][][][][]          "};
};

template<>
struct lockup<at::encoding>
{
	using glyph = at;
};

struct A
{
	using encoding = type::Encoding<65>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<A::encoding>
{
	using glyph = A;
};

struct B
{
	using encoding = type::Encoding<66>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][][][][][][][]      ",
		"[][][][][][][][][]    ",
		"[][]          [][][]  ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]          [][]    ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    "};
};

template<>
struct lockup<B::encoding>
{
	using glyph = B;
};

struct C
{
	using encoding = type::Encoding<67>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      "};
};

template<>
struct lockup<C::encoding>
{
	using glyph = C;
};

struct D
{
	using encoding = type::Encoding<68>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      "};
};

template<>
struct lockup<D::encoding>
{
	using glyph = D;
};

struct E
{
	using encoding = type::Encoding<69>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<E::encoding>
{
	using glyph = E;
};

struct F
{
	using encoding = type::Encoding<70>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][]  ",
		"[][][][][][][][]  ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<F::encoding>
{
	using glyph = F;
};

struct G
{
	using encoding = type::Encoding<71>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][27] = {
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<G::encoding>
{
	using glyph = G;
};

struct H
{
	using encoding = type::Encoding<72>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<H::encoding>
{
	using glyph = H;
};

struct I
{
	using encoding = type::Encoding<73>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<I::encoding>
{
	using glyph = I;
};

struct J
{
	using encoding = type::Encoding<74>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][][]    [][][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<J::encoding>
{
	using glyph = J;
};

struct K
{
	using encoding = type::Encoding<75>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]"};
};

template<>
struct lockup<K::encoding>
{
	using glyph = K;
};

struct L
{
	using encoding = type::Encoding<76>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]"};
};

template<>
struct lockup<L::encoding>
{
	using glyph = L;
};

struct M
{
	using encoding = type::Encoding<77>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"[][]                    [][]",
		"[][]                    [][]",
		"[][][]                [][][]",
		"[][][]                [][][]",
		"[][][][]            [][][][]",
		"[][][][]            [][][][]",
		"[][]  [][]        [][]  [][]",
		"[][]  [][]        [][]  [][]",
		"[][]    [][]    [][]    [][]",
		"[][]    [][]    [][]    [][]",
		"[][]      []    []      [][]",
		"[][]      [][][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<M::encoding>
{
	using glyph = M;
};

struct N
{
	using encoding = type::Encoding<78>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<N::encoding>
{
	using glyph = N;
};

struct O
{
	using encoding = type::Encoding<79>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][27] = {
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<O::encoding>
{
	using glyph = O;
};

struct P
{
	using encoding = type::Encoding<80>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][]    ",
		"[][][][][][][][][]  ",
		"[][]          [][][]",
		"[][]            [][]",
		"[][]            [][]",
		"[][]          [][][]",
		"[][][][][][][][][]  ",
		"[][][][][][][][]    ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                "};
};

template<>
struct lockup<P::encoding>
{
	using glyph = P;
};

struct Q
{
	using encoding = type::Encoding<81>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-1}};
	static constexpr char bitmap[15][27] = {
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]        [][]  [][][]",
		"  [][]        [][]  [][]  ",
		"  [][][]        [][][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]  [][]  ",
		"                    [][]  "};
};

template<>
struct lockup<Q::encoding>
{
	using glyph = Q;
};

struct R
{
	using encoding = type::Encoding<82>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<R::encoding>
{
	using glyph = R;
};

struct S
{
	using encoding = type::Encoding<83>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    "};
};

template<>
struct lockup<S::encoding>
{
	using glyph = S;
};

struct T
{
	using encoding = type::Encoding<84>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<T::encoding>
{
	using glyph = T;
};

struct U
{
	using encoding = type::Encoding<85>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<U::encoding>
{
	using glyph = U;
};

struct V
{
	using encoding = type::Encoding<86>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"        [][][][]        ",
		"          [][]          "};
};

template<>
struct lockup<V::encoding>
{
	using glyph = V;
};

struct W
{
	using encoding = type::Encoding<87>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][33] = {
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<W::encoding>
{
	using glyph = W;
};

struct X
{
	using encoding = type::Encoding<88>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][]      [][][]  ",
		"    [][]      [][]    ",
		"      [][]  [][]      ",
		"        [][][]        ",
		"        [][][]        ",
		"      [][]  [][]      ",
		"    [][]      [][]    ",
		"  [][][]      [][][]  ",
		"  [][]          [][]  ",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<X::encoding>
{
	using glyph = X;
};

struct Y
{
	using encoding = type::Encoding<89>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<Y::encoding>
{
	using glyph = Y;
};

struct Z
{
	using encoding = type::Encoding<90>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"      [][][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Z::encoding>
{
	using glyph = Z;
};

struct bracketleft
{
	using encoding = type::Encoding<91>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"[][][][]",
		"[][][][]",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][][][]",
		"[][][][]"};
};

template<>
struct lockup<bracketleft::encoding>
{
	using glyph = bracketleft;
};

struct backslash
{
	using encoding = type::Encoding<92>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][11] = {
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"    [][]  ",
		"    [][]  ",
		"    [][]  ",
		"    [][]  ",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]"};
};

template<>
struct lockup<backslash::encoding>
{
	using glyph = backslash;
};

struct bracketright
{
	using encoding = type::Encoding<93>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"[][][][]",
		"[][][][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"[][][][]",
		"[][][][]"};
};

template<>
struct lockup<bracketright::encoding>
{
	using glyph = bracketright;
};

struct asciicircum
{
	using encoding = type::Encoding<94>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{6}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{7}};
	static constexpr char bitmap[6][15] = {
		"      []      ",
		"    [][][]    ",
		"  [][]  [][]  ",
		"  [][]  [][]  ",
		"[][]      [][]",
		"[][]      [][]"};
};

template<>
struct lockup<asciicircum::encoding>
{
	using glyph = asciicircum;
};

struct underscore
{
	using encoding = type::Encoding<95>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[2][23] = {
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]"};
};

template<>
struct lockup<underscore::encoding>
{
	using glyph = underscore;
};

struct grave
{
	using encoding = type::Encoding<96>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][9] = {
		"[][]    ",
		"  [][]  ",
		"    [][]"};
};

template<>
struct lockup<grave::encoding>
{
	using glyph = grave;
};

struct a
{
	using encoding = type::Encoding<97>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][19] = {
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<a::encoding>
{
	using glyph = a;
};

struct b
{
	using encoding = type::Encoding<98>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    "};
};

template<>
struct lockup<b::encoding>
{
	using glyph = b;
};

struct c
{
	using encoding = type::Encoding<99>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  "};
};

template<>
struct lockup<c::encoding>
{
	using glyph = c;
};

struct d
{
	using encoding = type::Encoding<100>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]"};
};

template<>
struct lockup<d::encoding>
{
	using glyph = d;
};

struct e
{
	using encoding = type::Encoding<101>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<e::encoding>
{
	using glyph = e;
};

struct f
{
	using encoding = type::Encoding<102>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"      [][][]",
		"    [][][][]",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<f::encoding>
{
	using glyph = f;
};

struct g
{
	using encoding = type::Encoding<103>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][19] = {
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<g::encoding>
{
	using glyph = g;
};

struct h
{
	using encoding = type::Encoding<104>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<h::encoding>
{
	using glyph = h;
};

struct i
{
	using encoding = type::Encoding<105>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<i::encoding>
{
	using glyph = i;
};

struct j
{
	using encoding = type::Encoding<106>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"    [][]",
		"    [][]",
		"        ",
		"        ",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"[][][][]",
		"[][][]  "};
};

template<>
struct lockup<j::encoding>
{
	using glyph = j;
};

struct k
{
	using encoding = type::Encoding<107>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]      [][]  ",
		"[][]    [][]    ",
		"[][]  [][]      ",
		"[][][][]        ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"[][]    [][]    ",
		"[][]    [][][]  ",
		"[][]      [][]  ",
		"[][]      [][][]"};
};

template<>
struct lockup<k::encoding>
{
	using glyph = k;
};

struct l
{
	using encoding = type::Encoding<108>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<l::encoding>
{
	using glyph = l;
};

struct m
{
	using encoding = type::Encoding<109>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][29] = {
		"[][]  [][][][]    [][][][]  ",
		"[][][][][][][][][][][][][][]",
		"[][][]      [][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<m::encoding>
{
	using glyph = m;
};

struct n
{
	using encoding = type::Encoding<110>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<n::encoding>
{
	using glyph = n;
};

struct o
{
	using encoding = type::Encoding<111>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][19] = {
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<o::encoding>
{
	using glyph = o;
};

struct p
{
	using encoding = type::Encoding<112>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][19] = {
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<p::encoding>
{
	using glyph = p;
};

struct q
{
	using encoding = type::Encoding<113>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][19] = {
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]"};
};

template<>
struct lockup<q::encoding>
{
	using glyph = q;
};

struct r
{
	using encoding = type::Encoding<114>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"[][][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      "};
};

template<>
struct lockup<r::encoding>
{
	using glyph = r;
};

struct s
{
	using encoding = type::Encoding<115>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][15] = {
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<s::encoding>
{
	using glyph = s;
};

struct t
{
	using encoding = type::Encoding<116>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]"};
};

template<>
struct lockup<t::encoding>
{
	using glyph = t;
};

struct u
{
	using encoding = type::Encoding<117>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<u::encoding>
{
	using glyph = u;
};

struct v
{
	using encoding = type::Encoding<118>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<v::encoding>
{
	using glyph = v;
};

struct w
{
	using encoding = type::Encoding<119>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][25] = {
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<w::encoding>
{
	using glyph = w;
};

struct x
{
	using encoding = type::Encoding<120>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"[][]        [][]",
		"[][][]    [][][]",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"[][][]    [][][]",
		"[][]        [][]"};
};

template<>
struct lockup<x::encoding>
{
	using glyph = x;
};

struct y
{
	using encoding = type::Encoding<121>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<y::encoding>
{
	using glyph = y;
};

struct z
{
	using encoding = type::Encoding<122>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][15] = {
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<z::encoding>
{
	using glyph = z;
};

struct braceleft
{
	using encoding = type::Encoding<123>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"        [][]",
		"      [][]  ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"  [][]      ",
		"[][]        ",
		"  [][]      ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"      [][]  ",
		"        [][]"};
};

template<>
struct lockup<braceleft::encoding>
{
	using glyph = braceleft;
};

struct bar
{
	using encoding = type::Encoding<124>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<bar::encoding>
{
	using glyph = bar;
};

struct braceright
{
	using encoding = type::Encoding<125>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"[][]        ",
		"  [][]      ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"      [][]  ",
		"        [][]",
		"      [][]  ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"  [][]      ",
		"[][]        "};
};

template<>
struct lockup<braceright::encoding>
{
	using glyph = braceright;
};

struct asciitilde
{
	using encoding = type::Encoding<126>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{4}};
	static constexpr char bitmap[3][17] = {
		"  [][][]    [][]",
		"[][][][][][][][]",
		"[][]    [][][]  "};
};

template<>
struct lockup<asciitilde::encoding>
{
	using glyph = asciitilde;
};

struct exclamdown
{
	using encoding = type::Encoding<161>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[14][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"  []",
		"  []",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<exclamdown::encoding>
{
	using glyph = exclamdown;
};

struct cent
{
	using encoding = type::Encoding<162>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[14][17] = {
		"          []    ",
		"          []    ",
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]  []  [][]",
		"[][]    []      ",
		"[][]    []      ",
		"[][]    []      ",
		"[][]    []      ",
		"  [][]  []  [][]",
		"  [][][][][][][]",
		"    [][][][][]  ",
		"      []        ",
		"      []        "};
};

template<>
struct lockup<cent::encoding>
{
	using glyph = cent;
};

struct sterling
{
	using encoding = type::Encoding<163>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][19] = {
		"      [][][][]    ",
		"    [][][][][][]  ",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]            ",
		"    [][]          ",
		"  [][][][][][]    ",
		"      [][]        ",
		"      [][]        ",
		"    [][]          ",
		"  [][]          []",
		"[][][][][][][][][]",
		"[][]  [][][][][]  "};
};

template<>
struct lockup<sterling::encoding>
{
	using glyph = sterling;
};

struct currency
{
	using encoding = type::Encoding<164>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{7}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{3}};
	static constexpr char bitmap[7][17] = {
		"[][]        [][]",
		"[][][][][][][][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"[][][][][][][][]",
		"[][]        [][]"};
};

template<>
struct lockup<currency::encoding>
{
	using glyph = currency;
};

struct yen
{
	using encoding = type::Encoding<165>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"[][][][][][][][]",
		"      [][]      ",
		"[][][][][][][][]",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<yen::encoding>
{
	using glyph = yen;
};

struct brokenbar
{
	using encoding = type::Encoding<166>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"    ",
		"    ",
		"    ",
		"    ",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<brokenbar::encoding>
{
	using glyph = brokenbar;
};

struct section
{
	using encoding = type::Encoding<167>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][]        ",
		"  [][][][][]    ",
		"  [][]  [][][]  ",
		"[][]      [][][]",
		"[][]        [][]",
		"[][][]      [][]",
		"  [][][]    [][]",
		"    [][][][][]  ",
		"        [][][]  ",
		"          [][][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<section::encoding>
{
	using glyph = section;
};

struct dieresis
{
	using encoding = type::Encoding<168>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{12}};
	static constexpr char bitmap[2][11] = {
		"[][]  [][]",
		"[][]  [][]"};
};

template<>
struct lockup<dieresis::encoding>
{
	using glyph = dieresis;
};

struct copyright
{
	using encoding = type::Encoding<169>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][27] = {
		"        [][][][][]        ",
		"    [][]          [][]    ",
		"  []                  []  ",
		"  []      [][][]      []  ",
		"[]      []      []      []",
		"[]    []        []      []",
		"[]    []                []",
		"[]    []                []",
		"[]    []                []",
		"[]      []      []      []",
		"  []      [][][]      []  ",
		"  []                  []  ",
		"    [][]          [][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<copyright::encoding>
{
	using glyph = copyright;
};

struct ordfeminine
{
	using encoding = type::Encoding<170>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{6}};
	static constexpr char bitmap[8][11] = {
		"  [][][]  ",
		"[]    [][]",
		"    [][][]",
		"  []    []",
		"[][]  [][]",
		"  [][]  []",
		"          ",
		"[][][][][]"};
};

template<>
struct lockup<ordfeminine::encoding>
{
	using glyph = ordfeminine;
};

struct guillemotleft
{
	using encoding = type::Encoding<171>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{6}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{2}};
	static constexpr char bitmap[6][15] = {
		"    [][]  [][]",
		"  [][]  [][]  ",
		"[][]  [][]    ",
		"[][]  [][]    ",
		"  [][]  [][]  ",
		"    [][]  [][]"};
};

template<>
struct lockup<guillemotleft::encoding>
{
	using glyph = guillemotleft;
};

struct logicalnot
{
	using encoding = type::Encoding<172>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{3}};
	static constexpr char bitmap[5][19] = {
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"              [][]",
		"              [][]",
		"              [][]"};
};

template<>
struct lockup<logicalnot::encoding>
{
	using glyph = logicalnot;
};

struct registered
{
	using encoding = type::Encoding<174>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][27] = {
		"        [][][][][]        ",
		"    [][]          [][]    ",
		"  []                  []  ",
		"  []    [][][][][]    []  ",
		"[]      []        []    []",
		"[]      []        []    []",
		"[]      []        []    []",
		"[]      [][][][][]      []",
		"[]      []    []        []",
		"[]      []      []      []",
		"  []    []        []  []  ",
		"  []                  []  ",
		"    [][]          [][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<registered::encoding>
{
	using glyph = registered;
};

struct macron
{
	using encoding = type::Encoding<175>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{12}};
	static constexpr char bitmap[1][11] = {
		"[][][][][]"};
};

template<>
struct lockup<macron::encoding>
{
	using glyph = macron;
};

struct degree
{
	using encoding = type::Encoding<176>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{8}};
	static constexpr char bitmap[5][11] = {
		"  [][][]  ",
		"[][]  [][]",
		"[]      []",
		"[][]  [][]",
		"  [][][]  "};
};

template<>
struct lockup<degree::encoding>
{
	using glyph = degree;
};

struct plusminus
{
	using encoding = type::Encoding<177>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{11}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[11][17] = {
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"                ",
		"[][][][][][][][]",
		"[][][][][][][][]"};
};

template<>
struct lockup<plusminus::encoding>
{
	using glyph = plusminus;
};

struct twosuperior
{
	using encoding = type::Encoding<178>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[8][11] = {
		"  [][][]  ",
		"[][][][][]",
		"[]    [][]",
		"      [][]",
		"    [][]  ",
		"  [][]    ",
		"[][][][][]",
		"[][][][][]"};
};

template<>
struct lockup<twosuperior::encoding>
{
	using glyph = twosuperior;
};

struct threesuperior
{
	using encoding = type::Encoding<179>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[8][11] = {
		"  [][][]  ",
		"[][][][][]",
		"[]    [][]",
		"    [][]  ",
		"    [][]  ",
		"[]    [][]",
		"[][][][][]",
		"  [][][]  "};
};

template<>
struct lockup<threesuperior::encoding>
{
	using glyph = threesuperior;
};

struct acute
{
	using encoding = type::Encoding<180>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    "};
};

template<>
struct lockup<acute::encoding>
{
	using glyph = acute;
};

struct mu
{
	using encoding = type::Encoding<181>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][][]    [][][]",
		"[][][][][][][][]",
		"[][]  [][]  [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            "};
};

template<>
struct lockup<mu::encoding>
{
	using glyph = mu;
};

struct paragraph
{
	using encoding = type::Encoding<182>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"    [][][][][][]",
		"  [][][]    []  ",
		"[][][][]    []  ",
		"[][][][]    []  ",
		"[][][][]    []  ",
		"[][][][]    []  ",
		"[][][][]    []  ",
		"  [][][]    []  ",
		"    [][]    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  ",
		"      []    []  "};
};

template<>
struct lockup<paragraph::encoding>
{
	using glyph = paragraph;
};

struct periodcentered
{
	using encoding = type::Encoding<183>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{4}};
	static constexpr char bitmap[2][5] = {
		"[][]",
		"[][]"};
};

template<>
struct lockup<periodcentered::encoding>
{
	using glyph = periodcentered;
};

struct cedilla
{
	using encoding = type::Encoding<184>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[5][11] = {
		"  [][]    ",
		"  [][][]  ",
		"      [][]",
		"[][]  [][]",
		"[][][][]  "};
};

template<>
struct lockup<cedilla::encoding>
{
	using glyph = cedilla;
};

struct onesuperior
{
	using encoding = type::Encoding<185>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[8][9] = {
		"    [][]",
		"[][][][]",
		"[][][][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]"};
};

template<>
struct lockup<onesuperior::encoding>
{
	using glyph = onesuperior;
};

struct ordmasculine
{
	using encoding = type::Encoding<186>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{6}};
	static constexpr char bitmap[8][11] = {
		"  [][][]  ",
		"[][]  [][]",
		"[]      []",
		"[]      []",
		"[][]  [][]",
		"  [][][]  ",
		"          ",
		"[][][][][]"};
};

template<>
struct lockup<ordmasculine::encoding>
{
	using glyph = ordmasculine;
};

struct guillemotright
{
	using encoding = type::Encoding<187>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{6}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{2}};
	static constexpr char bitmap[6][15] = {
		"[][]  [][]    ",
		"  [][]  [][]  ",
		"    [][]  [][]",
		"    [][]  [][]",
		"  [][]  [][]  ",
		"[][]  [][]    "};
};

template<>
struct lockup<guillemotright::encoding>
{
	using glyph = guillemotright;
};

struct onequarter
{
	using encoding = type::Encoding<188>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][29] = {
		"    [][]            [][]    ",
		"[][][][]            [][]    ",
		"[][][][]          [][]      ",
		"    [][]        [][]        ",
		"    [][]        [][]        ",
		"    [][]      [][]      []  ",
		"    [][]      []      [][]  ",
		"    [][]    [][]    [][][]  ",
		"          [][]    [][][][]  ",
		"          [][]  [][]  [][]  ",
		"        [][]    [][][][][][]",
		"      [][]            [][]  ",
		"      [][]            [][]  "};
};

template<>
struct lockup<onequarter::encoding>
{
	using glyph = onequarter;
};

struct onehalf
{
	using encoding = type::Encoding<189>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][29] = {
		"    [][]            [][]    ",
		"[][][][]            [][]    ",
		"[][][][]          [][]      ",
		"    [][]        [][]        ",
		"    [][]        [][]        ",
		"    [][]      [][]  [][][]  ",
		"    [][]      []  [][][][][]",
		"    [][]    [][]  []    [][]",
		"          [][]          [][]",
		"          [][]        [][]  ",
		"        [][]        [][]    ",
		"      [][]        [][][][][]",
		"      [][]        [][][][][]"};
};

template<>
struct lockup<onehalf::encoding>
{
	using glyph = onehalf;
};

struct threequarters
{
	using encoding = type::Encoding<190>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][29] = {
		"  [][][]            [][]    ",
		"[][][][][]          [][]    ",
		"[]    [][]        [][]      ",
		"    [][]        [][]        ",
		"    [][]        [][]        ",
		"[]    [][]    [][]      []  ",
		"[][][][][]    []      [][]  ",
		"  [][][]    [][]    [][][]  ",
		"          [][]    [][][][]  ",
		"          [][]  [][]  [][]  ",
		"        [][]    [][][][][][]",
		"      [][]            [][]  ",
		"      [][]            [][]  "};
};

template<>
struct lockup<threequarters::encoding>
{
	using glyph = threequarters;
};

struct questiondown
{
	using encoding = type::Encoding<191>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][15] = {
		"      [][]    ",
		"      [][]    ",
		"              ",
		"              ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"    [][][]    ",
		"  [][][]      ",
		"[][][]        ",
		"[][]      [][]",
		"[][]      [][]",
		"[][][][][][][]",
		"  [][][][][]  "};
};

template<>
struct lockup<questiondown::encoding>
{
	using glyph = questiondown;
};

struct Agrave
{
	using encoding = type::Encoding<192>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"      [][]              ",
		"        [][]            ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Agrave::encoding>
{
	using glyph = Agrave;
};

struct Aacute
{
	using encoding = type::Encoding<193>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Aacute::encoding>
{
	using glyph = Aacute;
};

struct Acircumflex
{
	using encoding = type::Encoding<194>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Acircumflex::encoding>
{
	using glyph = Acircumflex;
};

struct Atilde
{
	using encoding = type::Encoding<195>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"        [][]    []      ",
		"      []  [][]  []      ",
		"      []    [][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Atilde::encoding>
{
	using glyph = Atilde;
};

struct Adieresis
{
	using encoding = type::Encoding<196>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Adieresis::encoding>
{
	using glyph = Adieresis;
};

struct Aring
{
	using encoding = type::Encoding<197>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"          [][]          ",
		"        []    []        ",
		"        []    []        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Aring::encoding>
{
	using glyph = Aring;
};

struct AE
{
	using encoding = type::Encoding<198>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][33] = {
		"          [][][][][][][][][][][]",
		"          [][][][][][][][][][][]",
		"        [][]  [][]              ",
		"        [][]  [][]              ",
		"      [][]    [][]              ",
		"      [][]    [][]              ",
		"    [][]      [][][][][][][][]  ",
		"    [][]      [][][][][][][][]  ",
		"    [][][][][][][]              ",
		"  [][][][][][][][]              ",
		"  [][]        [][]              ",
		"  [][]        [][]              ",
		"[][]          [][][][][][][][][]",
		"[][]          [][][][][][][][][]"};
};

template<>
struct lockup<AE::encoding>
{
	using glyph = AE;
};

struct Ccedilla
{
	using encoding = type::Encoding<199>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][25] = {
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      ",
		"          [][]          ",
		"            [][]        ",
		"      [][]  [][]        ",
		"      [][][][]          "};
};

template<>
struct lockup<Ccedilla::encoding>
{
	using glyph = Ccedilla;
};

struct Egrave
{
	using encoding = type::Encoding<200>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"    [][]            ",
		"      [][]          ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Egrave::encoding>
{
	using glyph = Egrave;
};

struct Eacute
{
	using encoding = type::Encoding<201>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Eacute::encoding>
{
	using glyph = Eacute;
};

struct Ecircumflex
{
	using encoding = type::Encoding<202>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Ecircumflex::encoding>
{
	using glyph = Ecircumflex;
};

struct Edieresis
{
	using encoding = type::Encoding<203>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[17][21] = {
		"    [][]    [][]    ",
		"    [][]    [][]    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Edieresis::encoding>
{
	using glyph = Edieresis;
};

struct Igrave
{
	using encoding = type::Encoding<204>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][9] = {
		"[][]    ",
		"  [][]  ",
		"    [][]",
		"        ",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]"};
};

template<>
struct lockup<Igrave::encoding>
{
	using glyph = Igrave;
};

struct Iacute
{
	using encoding = type::Encoding<205>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    ",
		"        ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    "};
};

template<>
struct lockup<Iacute::encoding>
{
	using glyph = Iacute;
};

struct Icircumflex
{
	using encoding = type::Encoding<206>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][13] = {
		"    [][]    ",
		"  [][][][]  ",
		"[]        []",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<Icircumflex::encoding>
{
	using glyph = Icircumflex;
};

struct Idieresis
{
	using encoding = type::Encoding<207>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][13] = {
		"[][]    [][]",
		"[][]    [][]",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<Idieresis::encoding>
{
	using glyph = Idieresis;
};

struct Eth
{
	using encoding = type::Encoding<208>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"    [][][][][][][][][]      ",
		"    [][][][][][][][][][]    ",
		"    [][]            [][][]  ",
		"    [][]              [][]  ",
		"    [][]                [][]",
		"    [][]                [][]",
		"[][][][][][][]          [][]",
		"[][][][][][][]          [][]",
		"    [][]                [][]",
		"    [][]                [][]",
		"    [][]              [][]  ",
		"    [][]            [][][]  ",
		"    [][][][][][][][][][]    ",
		"    [][][][][][][][][]      "};
};

template<>
struct lockup<Eth::encoding>
{
	using glyph = Eth;
};

struct Ntilde
{
	using encoding = type::Encoding<209>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"        [][]    []    ",
		"      []  [][]  []    ",
		"      []    [][]      ",
		"                      ",
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<Ntilde::encoding>
{
	using glyph = Ntilde;
};

struct Ograve
{
	using encoding = type::Encoding<210>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"      [][]                ",
		"        [][]              ",
		"          [][]            ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Ograve::encoding>
{
	using glyph = Ograve;
};

struct Oacute
{
	using encoding = type::Encoding<211>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"              [][]        ",
		"            [][]          ",
		"          [][]            ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Oacute::encoding>
{
	using glyph = Oacute;
};

struct Ocircumflex
{
	using encoding = type::Encoding<212>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"            [][]          ",
		"          [][][][]        ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Ocircumflex::encoding>
{
	using glyph = Ocircumflex;
};

struct Otilde
{
	using encoding = type::Encoding<213>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"          [][]    []      ",
		"        []  [][]  []      ",
		"        []    [][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Otilde::encoding>
{
	using glyph = Otilde;
};

struct Odieresis
{
	using encoding = type::Encoding<214>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][27] = {
		"        [][]    [][]      ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Odieresis::encoding>
{
	using glyph = Odieresis;
};

struct multiply
{
	using encoding = type::Encoding<215>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{9}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[9][21] = {
		"[][]            [][]",
		"  [][]        [][]  ",
		"    [][]    [][]    ",
		"      [][][][]      ",
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"  [][]        [][]  ",
		"[][]            [][]"};
};

template<>
struct lockup<multiply::encoding>
{
	using glyph = multiply;
};

struct Oslash
{
	using encoding = type::Encoding<216>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"          [][][][][]    [][]",
		"      [][][][][][][][][][]  ",
		"    [][][]          [][]    ",
		"    [][]          [][][][]  ",
		"  [][][]        [][]  [][][]",
		"  [][]        [][]      [][]",
		"  [][]      [][]        [][]",
		"  [][]      []          [][]",
		"  [][]    [][]          [][]",
		"  [][]  [][]          [][][]",
		"    [][][]            [][]  ",
		"    [][][]          [][][]  ",
		"  [][]  [][][][][][][][]    ",
		"[][]      [][][][][]        "};
};

template<>
struct lockup<Oslash::encoding>
{
	using glyph = Oslash;
};

struct Ugrave
{
	using encoding = type::Encoding<217>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"      [][]            ",
		"        [][]          ",
		"          [][]        ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Ugrave::encoding>
{
	using glyph = Ugrave;
};

struct Uacute
{
	using encoding = type::Encoding<218>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"            [][]      ",
		"          [][]        ",
		"        [][]          ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Uacute::encoding>
{
	using glyph = Uacute;
};

struct Ucircumflex
{
	using encoding = type::Encoding<219>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"          [][]        ",
		"        [][][][]      ",
		"      [][]    [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Ucircumflex::encoding>
{
	using glyph = Ucircumflex;
};

struct Udieresis
{
	using encoding = type::Encoding<220>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"    [][]      [][]    ",
		"    [][]      [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Udieresis::encoding>
{
	using glyph = Udieresis;
};

struct Yacute
{
	using encoding = type::Encoding<221>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<Yacute::encoding>
{
	using glyph = Yacute;
};

struct Thorn
{
	using encoding = type::Encoding<222>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][]    ",
		"[][][][][][][][][]  ",
		"[][]          [][][]",
		"[][]            [][]",
		"[][]            [][]",
		"[][]          [][][]",
		"[][][][][][][][][]  ",
		"[][][][][][][][]    ",
		"[][]                ",
		"[][]                ",
		"[][]                "};
};

template<>
struct lockup<Thorn::encoding>
{
	using glyph = Thorn;
};

struct germandbls
{
	using encoding = type::Encoding<223>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"    [][][]    ",
		"  [][][][][]  ",
		"[][]      [][]",
		"[][]      [][]",
		"[][]      [][]",
		"[][]      [][]",
		"[][]  [][][]  ",
		"[][]  [][][]  ",
		"[][]      [][]",
		"[][]      [][]",
		"[][]      [][]",
		"[][]      [][]",
		"[][]  [][][][]",
		"[][]  [][][]  "};
};

template<>
struct lockup<germandbls::encoding>
{
	using glyph = germandbls;
};

struct agrave
{
	using encoding = type::Encoding<224>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][]          ",
		"      [][]        ",
		"        [][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<agrave::encoding>
{
	using glyph = agrave;
};

struct aacute
{
	using encoding = type::Encoding<225>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"        [][]      ",
		"      [][]        ",
		"    [][]          ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<aacute::encoding>
{
	using glyph = aacute;
};

struct acircumflex
{
	using encoding = type::Encoding<226>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<acircumflex::encoding>
{
	using glyph = acircumflex;
};

struct atilde
{
	using encoding = type::Encoding<227>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<atilde::encoding>
{
	using glyph = atilde;
};

struct adieresis
{
	using encoding = type::Encoding<228>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"  [][]    [][]    ",
		"  [][]    [][]    ",
		"                  ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<adieresis::encoding>
{
	using glyph = adieresis;
};

struct aring
{
	using encoding = type::Encoding<229>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"      [][]        ",
		"    []    []      ",
		"    []    []      ",
		"      [][]        ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<aring::encoding>
{
	using glyph = aring;
};

struct ae
{
	using encoding = type::Encoding<230>;
	static constexpr auto next = type::Width{17};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[10][29] = {
		"  [][][][][][]  [][][][]    ",
		"[][][]    [][][][][][][][]  ",
		"[][]        [][]        [][]",
		"          [][][]        [][]",
		"  [][][][][][][][][][][][][]",
		"[][][]      [][]            ",
		"[][]        [][]            ",
		"[][]        [][][]      [][]",
		"[][][]    [][][][][][][][][]",
		"  [][][][]  []  [][][][]    "};
};

template<>
struct lockup<ae::encoding>
{
	using glyph = ae;
};

struct ccedilla
{
	using encoding = type::Encoding<231>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  ",
		"      [][]      ",
		"        [][]    ",
		"  [][]  [][]    ",
		"  [][][][]      "};
};

template<>
struct lockup<ccedilla::encoding>
{
	using glyph = ccedilla;
};

struct egrave
{
	using encoding = type::Encoding<232>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][]        ",
		"      [][]      ",
		"        [][]    ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<egrave::encoding>
{
	using glyph = egrave;
};

struct eacute
{
	using encoding = type::Encoding<233>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"        [][]    ",
		"      [][]      ",
		"    [][]        ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<eacute::encoding>
{
	using glyph = eacute;
};

struct ecircumflex
{
	using encoding = type::Encoding<234>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<ecircumflex::encoding>
{
	using glyph = ecircumflex;
};

struct edieresis
{
	using encoding = type::Encoding<235>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<edieresis::encoding>
{
	using glyph = edieresis;
};

struct igrave
{
	using encoding = type::Encoding<236>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][9] = {
		"[][]    ",
		"  [][]  ",
		"    [][]",
		"        ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  "};
};

template<>
struct lockup<igrave::encoding>
{
	using glyph = igrave;
};

struct iacute
{
	using encoding = type::Encoding<237>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    ",
		"        ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  "};
};

template<>
struct lockup<iacute::encoding>
{
	using glyph = iacute;
};

struct icircumflex
{
	using encoding = type::Encoding<238>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"    [][]    ",
		"  [][][][]  ",
		"[][]    [][]",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<icircumflex::encoding>
{
	using glyph = icircumflex;
};

struct idieresis
{
	using encoding = type::Encoding<239>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"          ",
		"          ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<idieresis::encoding>
{
	using glyph = idieresis;
};

struct eth
{
	using encoding = type::Encoding<240>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"  [][]            ",
		"    [][]  [][]    ",
		"    [][][]        ",
		"  []    [][]      ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<eth::encoding>
{
	using glyph = eth;
};

struct ntilde
{
	using encoding = type::Encoding<241>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<ntilde::encoding>
{
	using glyph = ntilde;
};

struct ograve
{
	using encoding = type::Encoding<242>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][]          ",
		"      [][]        ",
		"        [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<ograve::encoding>
{
	using glyph = ograve;
};

struct oacute
{
	using encoding = type::Encoding<243>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<oacute::encoding>
{
	using glyph = oacute;
};

struct ocircumflex
{
	using encoding = type::Encoding<244>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<ocircumflex::encoding>
{
	using glyph = ocircumflex;
};

struct otilde
{
	using encoding = type::Encoding<245>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<otilde::encoding>
{
	using glyph = otilde;
};

struct odieresis
{
	using encoding = type::Encoding<246>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][]    [][]  ",
		"    [][]    [][]  ",
		"                  ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<odieresis::encoding>
{
	using glyph = odieresis;
};

struct divide
{
	using encoding = type::Encoding<247>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{1}};
	static constexpr char bitmap[8][17] = {
		"      [][]      ",
		"      [][]      ",
		"                ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<divide::encoding>
{
	using glyph = divide;
};

struct oslash
{
	using encoding = type::Encoding<248>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[10][23] = {
		"        [][][]    [][]",
		"    [][][][][][][][]  ",
		"    [][]      [][]    ",
		"  [][]      [][][][]  ",
		"  [][]    [][]  [][]  ",
		"  [][]  [][]    [][]  ",
		"  [][][][]      [][]  ",
		"    [][]      [][]    ",
		"  [][][][][][][][]    ",
		"[][]    [][][]        "};
};

template<>
struct lockup<oslash::encoding>
{
	using glyph = oslash;
};

struct ugrave
{
	using encoding = type::Encoding<249>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][]        ",
		"      [][]      ",
		"        [][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<ugrave::encoding>
{
	using glyph = ugrave;
};

struct uacute
{
	using encoding = type::Encoding<250>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uacute::encoding>
{
	using glyph = uacute;
};

struct ucircumflex
{
	using encoding = type::Encoding<251>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<ucircumflex::encoding>
{
	using glyph = ucircumflex;
};

struct udieresis
{
	using encoding = type::Encoding<252>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<udieresis::encoding>
{
	using glyph = udieresis;
};

struct yacute
{
	using encoding = type::Encoding<253>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<yacute::encoding>
{
	using glyph = yacute;
};

struct thorn
{
	using encoding = type::Encoding<254>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<thorn::encoding>
{
	using glyph = thorn;
};

struct ydieresis
{
	using encoding = type::Encoding<255>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<ydieresis::encoding>
{
	using glyph = ydieresis;
};

struct Amacron
{
	using encoding = type::Encoding<256>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[16][25] = {
		"        [][][][][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Amacron::encoding>
{
	using glyph = Amacron;
};

struct amacron
{
	using encoding = type::Encoding<257>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[12][19] = {
		"    [][][][][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<amacron::encoding>
{
	using glyph = amacron;
};

struct Abreve
{
	using encoding = type::Encoding<258>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"      []        []      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Abreve::encoding>
{
	using glyph = Abreve;
};

struct abreve
{
	using encoding = type::Encoding<259>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"  []        []    ",
		"  [][]    [][]    ",
		"    [][][][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<abreve::encoding>
{
	using glyph = abreve;
};

struct Aogonek
{
	using encoding = type::Encoding<260>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][25] = {
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]        [][]    [][]",
		"          [][]          ",
		"        [][]            ",
		"        [][]            ",
		"          [][][]        "};
};

template<>
struct lockup<Aogonek::encoding>
{
	using glyph = Aogonek;
};

struct aogonek
{
	using encoding = type::Encoding<261>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][19] = {
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][][]  [][]",
		"      [][]        ",
		"    [][]          ",
		"    [][]          ",
		"      [][][]      "};
};

template<>
struct lockup<aogonek::encoding>
{
	using glyph = aogonek;
};

struct Cacute
{
	using encoding = type::Encoding<262>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      "};
};

template<>
struct lockup<Cacute::encoding>
{
	using glyph = Cacute;
};

struct cacute
{
	using encoding = type::Encoding<263>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  "};
};

template<>
struct lockup<cacute::encoding>
{
	using glyph = cacute;
};

struct Ccircumflex
{
	using encoding = type::Encoding<264>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      "};
};

template<>
struct lockup<Ccircumflex::encoding>
{
	using glyph = Ccircumflex;
};

struct ccircumflex
{
	using encoding = type::Encoding<265>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  "};
};

template<>
struct lockup<ccircumflex::encoding>
{
	using glyph = ccircumflex;
};

struct Cdotaccent
{
	using encoding = type::Encoding<266>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"          [][]          ",
		"          [][]          ",
		"                        ",
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      "};
};

template<>
struct lockup<Cdotaccent::encoding>
{
	using glyph = Cdotaccent;
};

struct cdotaccent
{
	using encoding = type::Encoding<267>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"      [][]      ",
		"      [][]      ",
		"                ",
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  "};
};

template<>
struct lockup<cdotaccent::encoding>
{
	using glyph = cdotaccent;
};

struct Ccaron
{
	using encoding = type::Encoding<268>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"                        ",
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      "};
};

template<>
struct lockup<Ccaron::encoding>
{
	using glyph = Ccaron;
};

struct ccaron
{
	using encoding = type::Encoding<269>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"                ",
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  "};
};

template<>
struct lockup<ccaron::encoding>
{
	using glyph = ccaron;
};

struct Dcaron
{
	using encoding = type::Encoding<270>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"    [][]    [][]        ",
		"      [][][][]          ",
		"        [][]            ",
		"                        ",
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      "};
};

template<>
struct lockup<Dcaron::encoding>
{
	using glyph = Dcaron;
};

struct dcaron
{
	using encoding = type::Encoding<271>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"              [][]  [][]",
		"              [][]  [][]",
		"              [][]    []",
		"              [][]    []",
		"    [][][][]  [][]  []  ",
		"  [][][][][][][][]      ",
		"  [][]      [][][]      ",
		"[][]          [][]      ",
		"[][]          [][]      ",
		"[][]          [][]      ",
		"[][]          [][]      ",
		"  [][]      [][][]      ",
		"  [][][][][][][][]      ",
		"    [][][][]  [][]      "};
};

template<>
struct lockup<dcaron::encoding>
{
	using glyph = dcaron;
};

struct Dcroat
{
	using encoding = type::Encoding<272>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"    [][][][][][][][][]      ",
		"    [][][][][][][][][][]    ",
		"    [][]            [][][]  ",
		"    [][]              [][]  ",
		"    [][]                [][]",
		"    [][]                [][]",
		"[][][][][][][]          [][]",
		"[][][][][][][]          [][]",
		"    [][]                [][]",
		"    [][]                [][]",
		"    [][]              [][]  ",
		"    [][]            [][][]  ",
		"    [][][][][][][][][][]    ",
		"    [][][][][][][][][]      "};
};

template<>
struct lockup<Dcroat::encoding>
{
	using glyph = Dcroat;
};

struct dcroat
{
	using encoding = type::Encoding<273>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"              [][]",
		"              [][]",
		"      [][][][][][]",
		"      [][][][][][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]"};
};

template<>
struct lockup<dcroat::encoding>
{
	using glyph = dcroat;
};

struct Emacron
{
	using encoding = type::Encoding<274>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[16][21] = {
		"    [][][][][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Emacron::encoding>
{
	using glyph = Emacron;
};

struct emacron
{
	using encoding = type::Encoding<275>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[12][17] = {
		"    [][][][][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<emacron::encoding>
{
	using glyph = emacron;
};

struct Ebreve
{
	using encoding = type::Encoding<276>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"    []        []    ",
		"    [][]    [][]    ",
		"      [][][][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Ebreve::encoding>
{
	using glyph = Ebreve;
};

struct ebreve
{
	using encoding = type::Encoding<277>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  []        []  ",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<ebreve::encoding>
{
	using glyph = ebreve;
};

struct Edotaccent
{
	using encoding = type::Encoding<278>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[17][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Edotaccent::encoding>
{
	using glyph = Edotaccent;
};

struct edotaccent
{
	using encoding = type::Encoding<279>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"      [][]      ",
		"      [][]      ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<edotaccent::encoding>
{
	using glyph = edotaccent;
};

struct Eogonek
{
	using encoding = type::Encoding<280>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"      [][]          ",
		"    [][]            ",
		"    [][]            ",
		"      [][][]        "};
};

template<>
struct lockup<Eogonek::encoding>
{
	using glyph = Eogonek;
};

struct eogonek
{
	using encoding = type::Encoding<281>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"      [][]      ",
		"    [][]        ",
		"    [][]        ",
		"      [][][]    "};
};

template<>
struct lockup<eogonek::encoding>
{
	using glyph = eogonek;
};

struct Ecaron
{
	using encoding = type::Encoding<282>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"    [][]    [][]    ",
		"      [][][][]      ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Ecaron::encoding>
{
	using glyph = Ecaron;
};

struct ecaron
{
	using encoding = type::Encoding<283>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<ecaron::encoding>
{
	using glyph = ecaron;
};

struct Gcircumflex
{
	using encoding = type::Encoding<284>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"            [][]          ",
		"          [][][][]        ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<Gcircumflex::encoding>
{
	using glyph = Gcircumflex;
};

struct gcircumflex
{
	using encoding = type::Encoding<285>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"        [][]      ",
		"      [][][][]    ",
		"    [][]    [][]  ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<gcircumflex::encoding>
{
	using glyph = gcircumflex;
};

struct Gbreve
{
	using encoding = type::Encoding<286>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"        []        []      ",
		"        [][]    [][]      ",
		"          [][][][]        ",
		"                          ",
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<Gbreve::encoding>
{
	using glyph = Gbreve;
};

struct gbreve
{
	using encoding = type::Encoding<287>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"    []        []  ",
		"    [][]    [][]  ",
		"      [][][][]    ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<gbreve::encoding>
{
	using glyph = gbreve;
};

struct Gdotaccent
{
	using encoding = type::Encoding<288>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][27] = {
		"            [][]          ",
		"            [][]          ",
		"                          ",
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<Gdotaccent::encoding>
{
	using glyph = Gdotaccent;
};

struct gdotaccent
{
	using encoding = type::Encoding<289>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[17][19] = {
		"        [][]      ",
		"        [][]      ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<gdotaccent::encoding>
{
	using glyph = gdotaccent;
};

struct Gcommaaccent
{
	using encoding = type::Encoding<290>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][27] = {
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]",
		"                          ",
		"            [][]          ",
		"            [][]          ",
		"              []          ",
		"              []          ",
		"            []            "};
};

template<>
struct lockup<Gcommaaccent::encoding>
{
	using glyph = Gcommaaccent;
};

struct gcommaaccent
{
	using encoding = type::Encoding<291>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[20][19] = {
		"          []      ",
		"        []        ",
		"        []        ",
		"        [][]      ",
		"        [][]      ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<gcommaaccent::encoding>
{
	using glyph = gcommaaccent;
};

struct Hcircumflex
{
	using encoding = type::Encoding<292>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"          [][]        ",
		"        [][][][]      ",
		"      [][]    [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<Hcircumflex::encoding>
{
	using glyph = Hcircumflex;
};

struct hcircumflex
{
	using encoding = type::Encoding<293>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]          ",
		"  [][][][]        ",
		"[][]    [][]      ",
		"                  ",
		"  [][]            ",
		"  [][]            ",
		"  [][]            ",
		"  [][]            ",
		"  [][]  [][][][]  ",
		"  [][][][][][][][]",
		"  [][][]      [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]"};
};

template<>
struct lockup<hcircumflex::encoding>
{
	using glyph = hcircumflex;
};

struct Hbar
{
	using encoding = type::Encoding<294>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<Hbar::encoding>
{
	using glyph = Hbar;
};

struct hbar
{
	using encoding = type::Encoding<295>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"  [][]            ",
		"  [][]            ",
		"[][][][][][]      ",
		"[][][][][][]      ",
		"  [][]  [][][][]  ",
		"  [][][][][][][][]",
		"  [][][]      [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]"};
};

template<>
struct lockup<hbar::encoding>
{
	using glyph = hbar;
};

struct Itilde
{
	using encoding = type::Encoding<296>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][13] = {
		"  [][]    []",
		"[]  [][]  []",
		"[]    [][]  ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<Itilde::encoding>
{
	using glyph = Itilde;
};

struct itilde
{
	using encoding = type::Encoding<297>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"  [][]    []",
		"[]  [][]  []",
		"[]    [][]  ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<itilde::encoding>
{
	using glyph = itilde;
};

struct Imacron
{
	using encoding = type::Encoding<298>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][11] = {
		"[][][][][]",
		"          ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<Imacron::encoding>
{
	using glyph = Imacron;
};

struct imacron
{
	using encoding = type::Encoding<299>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[12][11] = {
		"[][][][][]",
		"          ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<imacron::encoding>
{
	using glyph = imacron;
};

struct Ibreve
{
	using encoding = type::Encoding<300>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][13] = {
		"[]        []",
		"[][]    [][]",
		"  [][][][]  ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<Ibreve::encoding>
{
	using glyph = Ibreve;
};

struct ibreve
{
	using encoding = type::Encoding<301>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"[]        []",
		"[][]    [][]",
		"  [][][][]  ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<ibreve::encoding>
{
	using glyph = ibreve;
};

struct Iogonek
{
	using encoding = type::Encoding<302>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][][]",
		"  [][]  ",
		"[][]    ",
		"[][]    ",
		"  [][][]"};
};

template<>
struct lockup<Iogonek::encoding>
{
	using glyph = Iogonek;
};

struct iogonek
{
	using encoding = type::Encoding<303>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][9] = {
		"  [][]  ",
		"  [][]  ",
		"        ",
		"        ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][][]",
		"  [][]  ",
		"[][]    ",
		"[][]    ",
		"  [][][]"};
};

template<>
struct lockup<iogonek::encoding>
{
	using glyph = iogonek;
};

struct Idotaccent
{
	using encoding = type::Encoding<304>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[17][5] = {
		"[][]",
		"[][]",
		"    ",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<Idotaccent::encoding>
{
	using glyph = Idotaccent;
};

struct dotlessi
{
	using encoding = type::Encoding<305>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<dotlessi::encoding>
{
	using glyph = dotlessi;
};

struct IJ
{
	using encoding = type::Encoding<306>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]    [][]        [][]",
		"[][]    [][]        [][]",
		"[][]    [][][]    [][][]",
		"[][]      [][][][][][]  ",
		"[][]        [][][][]    "};
};

template<>
struct lockup<IJ::encoding>
{
	using glyph = IJ;
};

struct ij
{
	using encoding = type::Encoding<307>;
	static constexpr auto next = type::Width{8};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"[][]    [][]",
		"[][]    [][]",
		"            ",
		"            ",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"[][]    [][]",
		"        [][]",
		"        [][]",
		"    [][][][]",
		"    [][][]  "};
};

template<>
struct lockup<ij::encoding>
{
	using glyph = ij;
};

struct Jcircumflex
{
	using encoding = type::Encoding<308>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][][][]  ",
		"      [][]    [][]",
		"                  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"            [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][]  ",
		"  [][][][][][]    ",
		"    [][][][]      "};
};

template<>
struct lockup<Jcircumflex::encoding>
{
	using glyph = Jcircumflex;
};

struct jcircumflex
{
	using encoding = type::Encoding<309>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"    [][]    ",
		"  [][][][]  ",
		"[][]    [][]",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][]    ",
		"[][][]      "};
};

template<>
struct lockup<jcircumflex::encoding>
{
	using glyph = jcircumflex;
};

struct Kcommaaccent
{
	using encoding = type::Encoding<310>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-6}};
	static constexpr char bitmap[20][25] = {
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"            []          ",
		"            []          ",
		"          []            "};
};

template<>
struct lockup<Kcommaaccent::encoding>
{
	using glyph = Kcommaaccent;
};

struct kcommaaccent
{
	using encoding = type::Encoding<311>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]      [][]  ",
		"[][]    [][]    ",
		"[][]  [][]      ",
		"[][][][]        ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"[][]    [][]    ",
		"[][]    [][][]  ",
		"[][]      [][]  ",
		"[][]      [][][]",
		"                ",
		"      [][]      ",
		"      [][]      ",
		"        []      ",
		"        []      ",
		"      []        "};
};

template<>
struct lockup<kcommaaccent::encoding>
{
	using glyph = kcommaaccent;
};

struct kgreenlandic
{
	using encoding = type::Encoding<312>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"[][]      [][]  ",
		"[][]    [][]    ",
		"[][]  [][]      ",
		"[][][][]        ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"[][]    [][]    ",
		"[][]    [][][]  ",
		"[][]      [][]  ",
		"[][]      [][][]"};
};

template<>
struct lockup<kgreenlandic::encoding>
{
	using glyph = kgreenlandic;
};

struct Lacute
{
	using encoding = type::Encoding<313>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"      [][]        ",
		"    [][]          ",
		"  [][]            ",
		"                  ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]"};
};

template<>
struct lockup<Lacute::encoding>
{
	using glyph = Lacute;
};

struct lacute
{
	using encoding = type::Encoding<314>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    ",
		"        ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    ",
		"[][]    "};
};

template<>
struct lockup<lacute::encoding>
{
	using glyph = lacute;
};

struct Lcommaaccent
{
	using encoding = type::Encoding<315>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"                  ",
		"      [][]        ",
		"      [][]        ",
		"        []        ",
		"        []        ",
		"      []          "};
};

template<>
struct lockup<Lcommaaccent::encoding>
{
	using glyph = Lcommaaccent;
};

struct lcommaaccent
{
	using encoding = type::Encoding<316>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"    ",
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<lcommaaccent::encoding>
{
	using glyph = lcommaaccent;
};

struct Lcaron
{
	using encoding = type::Encoding<317>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"[][]                  []",
		"[][]                  []",
		"[][]                []  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][][][][][][][]      ",
		"[][][][][][][][][]      "};
};

template<>
struct lockup<Lcaron::encoding>
{
	using glyph = Lcaron;
};

struct lcaron
{
	using encoding = type::Encoding<318>;
	static constexpr auto next = type::Width{8};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"[][]    [][]",
		"[][]    [][]",
		"[][]      []",
		"[][]      []",
		"[][]    []  ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        "};
};

template<>
struct lockup<lcaron::encoding>
{
	using glyph = lcaron;
};

struct Ldot
{
	using encoding = type::Encoding<319>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                    ",
		"[][]                    ",
		"[][][][][][][][][]      ",
		"[][][][][][][][][]      "};
};

template<>
struct lockup<Ldot::encoding>
{
	using glyph = Ldot;
};

struct ldot
{
	using encoding = type::Encoding<320>;
	static constexpr auto next = type::Width{8};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]    [][]",
		"[][]    [][]",
		"[][]        ",
		"[][]        ",
		"[][]        ",
		"[][]        "};
};

template<>
struct lockup<ldot::encoding>
{
	using glyph = ldot;
};

struct Lslash
{
	using encoding = type::Encoding<321>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"  [][]              ",
		"  [][]              ",
		"  [][]              ",
		"  [][]              ",
		"  [][]  [][]        ",
		"  [][][][][]        ",
		"[][][][]            ",
		"[][][]              ",
		"  [][]              ",
		"  [][]              ",
		"  [][]              ",
		"  [][]              ",
		"  [][][][][][][][][]",
		"  [][][][][][][][][]"};
};

template<>
struct lockup<Lslash::encoding>
{
	using glyph = Lslash;
};

struct lslash
{
	using encoding = type::Encoding<322>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][9] = {
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][][]",
		"[][][][]",
		"[][][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  ",
		"  [][]  "};
};

template<>
struct lockup<lslash::encoding>
{
	using glyph = lslash;
};

struct Nacute
{
	using encoding = type::Encoding<323>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"            [][]      ",
		"          [][]        ",
		"        [][]          ",
		"                      ",
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<Nacute::encoding>
{
	using glyph = Nacute;
};

struct nacute
{
	using encoding = type::Encoding<324>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<nacute::encoding>
{
	using glyph = nacute;
};

struct Ncommaaccent
{
	using encoding = type::Encoding<325>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"          [][]        ",
		"            []        ",
		"            []        ",
		"          []          "};
};

template<>
struct lockup<Ncommaaccent::encoding>
{
	using glyph = Ncommaaccent;
};

struct ncommaaccent
{
	using encoding = type::Encoding<326>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[16][17] = {
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"      [][]      ",
		"      [][]      ",
		"        []      ",
		"        []      ",
		"      []        "};
};

template<>
struct lockup<ncommaaccent::encoding>
{
	using glyph = ncommaaccent;
};

struct Ncaron
{
	using encoding = type::Encoding<327>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"    [][]    [][]      ",
		"      [][][][]        ",
		"        [][]          ",
		"                      ",
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<Ncaron::encoding>
{
	using glyph = Ncaron;
};

struct ncaron
{
	using encoding = type::Encoding<328>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"                ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<ncaron::encoding>
{
	using glyph = ncaron;
};

struct napostrophe
{
	using encoding = type::Encoding<329>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                    ",
		"[][]                    ",
		"  []                    ",
		"  []                    ",
		"[]      [][]  [][][][]  ",
		"        [][][][][][][][]",
		"        [][][]      [][]",
		"        [][]        [][]",
		"        [][]        [][]",
		"        [][]        [][]",
		"        [][]        [][]",
		"        [][]        [][]",
		"        [][]        [][]",
		"        [][]        [][]"};
};

template<>
struct lockup<napostrophe::encoding>
{
	using glyph = napostrophe;
};

struct Eng
{
	using encoding = type::Encoding<330>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]",
		"                  [][]",
		"                  [][]",
		"              [][][][]",
		"              [][][]  "};
};

template<>
struct lockup<Eng::encoding>
{
	using glyph = Eng;
};

struct eng
{
	using encoding = type::Encoding<331>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"            [][]",
		"            [][]",
		"        [][][][]",
		"        [][][]  "};
};

template<>
struct lockup<eng::encoding>
{
	using glyph = eng;
};

struct Omacron
{
	using encoding = type::Encoding<332>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][27] = {
		"        [][][][][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Omacron::encoding>
{
	using glyph = Omacron;
};

struct omacron
{
	using encoding = type::Encoding<333>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[12][19] = {
		"    [][][][][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<omacron::encoding>
{
	using glyph = omacron;
};

struct Obreve
{
	using encoding = type::Encoding<334>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"        []        []      ",
		"        [][]    [][]      ",
		"          [][][][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Obreve::encoding>
{
	using glyph = Obreve;
};

struct obreve
{
	using encoding = type::Encoding<335>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    []        []  ",
		"    [][]    [][]  ",
		"      [][][][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<obreve::encoding>
{
	using glyph = obreve;
};

struct Ohungarumlaut
{
	using encoding = type::Encoding<336>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"            [][]  [][]    ",
		"          [][]  [][]      ",
		"        [][]  [][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<Ohungarumlaut::encoding>
{
	using glyph = Ohungarumlaut;
};

struct ohungarumlaut
{
	using encoding = type::Encoding<337>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"        [][]  [][]",
		"      [][]  [][]  ",
		"    [][]  [][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<ohungarumlaut::encoding>
{
	using glyph = ohungarumlaut;
};

struct OE
{
	using encoding = type::Encoding<338>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{17}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][35] = {
		"        [][][]  [][][][][][][][][]",
		"    [][][][][][][][][][][][][][][]",
		"  [][][]      [][][]              ",
		"  [][]          [][]              ",
		"[][][]          [][]              ",
		"[][]            [][]              ",
		"[][]            [][][][][][][][]  ",
		"[][]            [][][][][][][][]  ",
		"[][]            [][]              ",
		"[][][]          [][]              ",
		"  [][]          [][]              ",
		"  [][][]      [][][]              ",
		"    [][][][][][][][][][][][][][][]",
		"        [][][]  [][][][][][][][][]"};
};

template<>
struct lockup<OE::encoding>
{
	using glyph = OE;
};

struct oe
{
	using encoding = type::Encoding<339>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{15}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[10][31] = {
		"    [][][][][]    [][][][]    ",
		"  [][][][][][][][][][][][][]  ",
		"  [][]      [][][]        [][]",
		"[][]          [][]        [][]",
		"[][]          [][][][][][][][]",
		"[][]          [][]            ",
		"[][]          [][]            ",
		"  [][]      [][][][]      [][]",
		"  [][][][][][][][][][][][][][]",
		"    [][][][][]    [][][][]    "};
};

template<>
struct lockup<oe::encoding>
{
	using glyph = oe;
};

struct Racute
{
	using encoding = type::Encoding<340>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"            [][]      ",
		"          [][]        ",
		"        [][]          ",
		"                      ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<Racute::encoding>
{
	using glyph = Racute;
};

struct racute
{
	using encoding = type::Encoding<341>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][11] = {
		"      [][]",
		"    [][]  ",
		"  [][]    ",
		"          ",
		"[][]  [][]",
		"[][]  [][]",
		"[][][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      "};
};

template<>
struct lockup<racute::encoding>
{
	using glyph = racute;
};

struct Rcommaaccent
{
	using encoding = type::Encoding<342>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][23] = {
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"          [][]        ",
		"            []        ",
		"            []        ",
		"          []          "};
};

template<>
struct lockup<Rcommaaccent::encoding>
{
	using glyph = Rcommaaccent;
};

struct rcommaaccent
{
	using encoding = type::Encoding<343>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[16][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"[][][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"          ",
		"  [][]    ",
		"  [][]    ",
		"    []    ",
		"    []    ",
		"  []      "};
};

template<>
struct lockup<rcommaaccent::encoding>
{
	using glyph = rcommaaccent;
};

struct Rcaron
{
	using encoding = type::Encoding<344>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"    [][]    [][]      ",
		"      [][][][]        ",
		"        [][]          ",
		"                      ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<Rcaron::encoding>
{
	using glyph = Rcaron;
};

struct rcaron
{
	using encoding = type::Encoding<345>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"[][]    [][]",
		"  [][][][]  ",
		"    [][]    ",
		"            ",
		"  [][]  [][]",
		"  [][]  [][]",
		"  [][][]    ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      "};
};

template<>
struct lockup<rcaron::encoding>
{
	using glyph = rcaron;
};

struct Sacute
{
	using encoding = type::Encoding<346>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    "};
};

template<>
struct lockup<Sacute::encoding>
{
	using glyph = Sacute;
};

struct sacute
{
	using encoding = type::Encoding<347>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<sacute::encoding>
{
	using glyph = sacute;
};

struct Scircumflex
{
	using encoding = type::Encoding<348>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"                    ",
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    "};
};

template<>
struct lockup<Scircumflex::encoding>
{
	using glyph = Scircumflex;
};

struct scircumflex
{
	using encoding = type::Encoding<349>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"      [][]    ",
		"    [][][][]  ",
		"  [][]    [][]",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<scircumflex::encoding>
{
	using glyph = scircumflex;
};

struct Scedilla
{
	using encoding = type::Encoding<350>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    ",
		"        [][][]      ",
		"            [][]    ",
		"      [][]  [][]    ",
		"      [][][][]      "};
};

template<>
struct lockup<Scedilla::encoding>
{
	using glyph = Scedilla;
};

struct scedilla
{
	using encoding = type::Encoding<351>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][15] = {
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    ",
		"    [][][]    ",
		"        [][]  ",
		"  [][]  [][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<scedilla::encoding>
{
	using glyph = scedilla;
};

struct Scaron
{
	using encoding = type::Encoding<352>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"    [][]    [][]      ",
		"      [][][][]        ",
		"        [][]          ",
		"                      ",
		"      [][][][][]      ",
		"  [][][][][][][][][]  ",
		"[][][]          [][][]",
		"[][][]                ",
		"  [][][][][][][][][]  ",
		"    [][][][][][][][][]",
		"                [][][]",
		"[][][]          [][][]",
		"  [][][][][][][][][]  ",
		"    [][][][][][]      "};
};

template<>
struct lockup<Scaron::encoding>
{
	using glyph = Scaron;
};

struct scaron
{
	using encoding = type::Encoding<353>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"[][]    [][]  ",
		"  [][][][]    ",
		"    [][]      ",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<scaron::encoding>
{
	using glyph = scaron;
};

struct Tcommaaccent
{
	using encoding = type::Encoding<354>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][][]      ",
		"            [][]    ",
		"      [][]  [][]    ",
		"      [][][][]      "};
};

template<>
struct lockup<Tcommaaccent::encoding>
{
	using glyph = Tcommaaccent;
};

struct tcommaaccent
{
	using encoding = type::Encoding<355>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[17][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"    [][][][]",
		"    [][][]  ",
		"        [][]",
		"  [][]  [][]",
		"  [][][][]  "};
};

template<>
struct lockup<tcommaaccent::encoding>
{
	using glyph = tcommaaccent;
};

struct Tcaron
{
	using encoding = type::Encoding<356>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"    [][]    [][]    ",
		"      [][][][]      ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<Tcaron::encoding>
{
	using glyph = Tcaron;
};

struct tcaron
{
	using encoding = type::Encoding<357>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"              [][]",
		"    [][]      [][]",
		"    [][]        []",
		"    [][]        []",
		"[][][][][][]  []  ",
		"[][][][][][]      ",
		"    [][]          ",
		"    [][]          ",
		"    [][]          ",
		"    [][]          ",
		"    [][]          ",
		"    [][]          ",
		"    [][][][]      ",
		"      [][][]      "};
};

template<>
struct lockup<tcaron::encoding>
{
	using glyph = tcaron;
};

struct Tbar
{
	using encoding = type::Encoding<358>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"    [][][][][][]    ",
		"    [][][][][][]    ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<Tbar::encoding>
{
	using glyph = Tbar;
};

struct tbar
{
	using encoding = type::Encoding<359>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]"};
};

template<>
struct lockup<tbar::encoding>
{
	using glyph = tbar;
};

struct Utilde
{
	using encoding = type::Encoding<360>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"        [][]    []    ",
		"      []  [][]  []    ",
		"      []    [][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Utilde::encoding>
{
	using glyph = Utilde;
};

struct utilde
{
	using encoding = type::Encoding<361>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<utilde::encoding>
{
	using glyph = utilde;
};

struct Umacron
{
	using encoding = type::Encoding<362>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][23] = {
		"      [][][][][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Umacron::encoding>
{
	using glyph = Umacron;
};

struct umacron
{
	using encoding = type::Encoding<363>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[12][17] = {
		"    [][][][][]  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<umacron::encoding>
{
	using glyph = umacron;
};

struct Ubreve
{
	using encoding = type::Encoding<364>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"      []        []    ",
		"      [][]    [][]    ",
		"        [][][][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Ubreve::encoding>
{
	using glyph = Ubreve;
};

struct ubreve
{
	using encoding = type::Encoding<365>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  []        []  ",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<ubreve::encoding>
{
	using glyph = ubreve;
};

struct Uring
{
	using encoding = type::Encoding<366>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[19][23] = {
		"        [][][]        ",
		"      [][]  [][]      ",
		"      [][]  [][]      ",
		"        [][][]        ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Uring::encoding>
{
	using glyph = Uring;
};

struct uring
{
	using encoding = type::Encoding<367>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[15][17] = {
		"      [][][]    ",
		"    [][]  [][]  ",
		"    [][]  [][]  ",
		"      [][][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uring::encoding>
{
	using glyph = uring;
};

struct Uhungarumlaut
{
	using encoding = type::Encoding<368>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"          [][]  [][]  ",
		"        [][]  [][]    ",
		"      [][]  [][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<Uhungarumlaut::encoding>
{
	using glyph = Uhungarumlaut;
};

struct uhungarumlaut
{
	using encoding = type::Encoding<369>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"      [][]  [][]",
		"    [][]  [][]  ",
		"  [][]  [][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uhungarumlaut::encoding>
{
	using glyph = uhungarumlaut;
};

struct Uogonek
{
	using encoding = type::Encoding<370>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      ",
		"        [][]          ",
		"      [][]            ",
		"      [][]            ",
		"        [][][]        "};
};

template<>
struct lockup<Uogonek::encoding>
{
	using glyph = Uogonek;
};

struct uogonek
{
	using encoding = type::Encoding<371>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][][][][]",
		"      [][]      ",
		"    [][]        ",
		"    [][]        ",
		"      [][][]    "};
};

template<>
struct lockup<uogonek::encoding>
{
	using glyph = uogonek;
};

struct Wcircumflex
{
	using encoding = type::Encoding<372>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][33] = {
		"              [][]              ",
		"            [][][][]            ",
		"          [][]    [][]          ",
		"                                ",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<Wcircumflex::encoding>
{
	using glyph = Wcircumflex;
};

struct wcircumflex
{
	using encoding = type::Encoding<373>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<wcircumflex::encoding>
{
	using glyph = wcircumflex;
};

struct Ycircumflex
{
	using encoding = type::Encoding<374>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<Ycircumflex::encoding>
{
	using glyph = Ycircumflex;
};

struct ycircumflex
{
	using encoding = type::Encoding<375>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<ycircumflex::encoding>
{
	using glyph = ycircumflex;
};

struct Ydieresis
{
	using encoding = type::Encoding<376>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"      [][]  [][]        ",
		"      [][]  [][]        ",
		"                        ",
		"                        ",
		"[][]                [][]",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<Ydieresis::encoding>
{
	using glyph = Ydieresis;
};

struct Zacute
{
	using encoding = type::Encoding<377>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"      [][][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Zacute::encoding>
{
	using glyph = Zacute;
};

struct zacute
{
	using encoding = type::Encoding<378>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<zacute::encoding>
{
	using glyph = zacute;
};

struct Zdotaccent
{
	using encoding = type::Encoding<379>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"      [][][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Zdotaccent::encoding>
{
	using glyph = Zdotaccent;
};

struct zdotaccent
{
	using encoding = type::Encoding<380>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][15] = {
		"      [][]    ",
		"      [][]    ",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<zdotaccent::encoding>
{
	using glyph = zdotaccent;
};

struct Zcaron
{
	using encoding = type::Encoding<381>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"    [][]    [][]    ",
		"      [][][][]      ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][]  ",
		"          [][][]    ",
		"        [][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<Zcaron::encoding>
{
	using glyph = Zcaron;
};

struct zcaron
{
	using encoding = type::Encoding<382>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"[][]    [][]  ",
		"  [][][][]    ",
		"    [][]      ",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<zcaron::encoding>
{
	using glyph = zcaron;
};

struct uni0186
{
	using encoding = type::Encoding<390>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"      [][][][][]        ",
		"  [][][][][][][][][]    ",
		"[][][]          [][][]  ",
		"[][]              [][]  ",
		"                  [][][]",
		"                    [][]",
		"                    [][]",
		"                    [][]",
		"                    [][]",
		"                  [][][]",
		"[][]              [][]  ",
		"[][][]          [][][]  ",
		"  [][][][][][][][][]    ",
		"      [][][][][]        "};
};

template<>
struct lockup<uni0186::encoding>
{
	using glyph = uni0186;
};

struct uni0189
{
	using encoding = type::Encoding<393>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"    [][][][][][][][][]      ",
		"    [][][][][][][][][][]    ",
		"    [][]            [][][]  ",
		"    [][]              [][]  ",
		"    [][]                [][]",
		"    [][]                [][]",
		"[][][][][][][]          [][]",
		"[][][][][][][]          [][]",
		"    [][]                [][]",
		"    [][]                [][]",
		"    [][]              [][]  ",
		"    [][]            [][][]  ",
		"    [][][][][][][][][][]    ",
		"    [][][][][][][][][]      "};
};

template<>
struct lockup<uni0189::encoding>
{
	using glyph = uni0189;
};

struct uni018E
{
	using encoding = type::Encoding<398>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"  [][][][][][][][][]",
		"  [][][][][][][][][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni018E::encoding>
{
	using glyph = uni018E;
};

struct florin
{
	using encoding = type::Encoding<402>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[17][19] = {
		"            [][][]",
		"          [][][][]",
		"        [][]      ",
		"        [][]      ",
		"  [][][][][][][]  ",
		"  [][][][][][][]  ",
		"      [][]        ",
		"      [][]        ",
		"      [][]        ",
		"      [][]        ",
		"      [][]        ",
		"      [][]        ",
		"    [][]          ",
		"    [][]          ",
		"    [][]          ",
		"[][][]            ",
		"[][]              "};
};

template<>
struct lockup<florin::encoding>
{
	using glyph = florin;
};

struct uni0197
{
	using encoding = type::Encoding<407>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni0197::encoding>
{
	using glyph = uni0197;
};

struct uni019A
{
	using encoding = type::Encoding<410>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni019A::encoding>
{
	using glyph = uni019A;
};

struct uni019D
{
	using encoding = type::Encoding<413>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][27] = {
		"    [][]              [][]",
		"    [][][]            [][]",
		"    [][][][]          [][]",
		"    [][][][]          [][]",
		"    [][]  [][]        [][]",
		"    [][]    [][]      [][]",
		"    [][]    [][]      [][]",
		"    [][]      [][]    [][]",
		"    [][]      [][]    [][]",
		"    [][]        [][]  [][]",
		"    [][]          [][][][]",
		"    [][]          [][][][]",
		"    [][]            [][][]",
		"    [][]              [][]",
		"    [][]                  ",
		"    [][]                  ",
		"[][][][]                  ",
		"[][][]                    "};
};

template<>
struct lockup<uni019D::encoding>
{
	using glyph = uni019D;
};

struct uni019F
{
	using encoding = type::Encoding<415>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][27] = {
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][][][][][][][][][][][][]",
		"[][][][][][][][][][][][][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni019F::encoding>
{
	using glyph = uni019F;
};

struct Ohorn
{
	using encoding = type::Encoding<416>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"        [][][][][]      [][]",
		"    [][][][][][][][][]  [][]",
		"  [][][]          [][][]  []",
		"  [][]              [][]  []",
		"[][][]              [][][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][][]              [][][]  ",
		"  [][]              [][]    ",
		"  [][][]          [][][]    ",
		"    [][][][][][][][][]      ",
		"        [][][][][]          "};
};

template<>
struct lockup<Ohorn::encoding>
{
	using glyph = Ohorn;
};

struct ohorn
{
	using encoding = type::Encoding<417>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][21] = {
		"    [][][][][]  [][]",
		"  [][][][][][][][][]",
		"  [][]      [][]  []",
		"[][]          [][][]",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"  [][]      [][]    ",
		"  [][][][][][][]    ",
		"    [][][][][]      "};
};

template<>
struct lockup<ohorn::encoding>
{
	using glyph = ohorn;
};

struct uni01A7
{
	using encoding = type::Encoding<423>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"              [][][]",
		"        [][][][][]  ",
		"    [][][][][]      ",
		"  [][][]            ",
		"[][][]              ",
		"[][]                ",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    "};
};

template<>
struct lockup<uni01A7::encoding>
{
	using glyph = uni01A7;
};

struct uni01A8
{
	using encoding = type::Encoding<424>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][15] = {
		"  [][][][]    ",
		"[][][][][][]  ",
		"[][]      [][]",
		"          [][]",
		"  [][][][][][]",
		"[][][][][]    ",
		"[][]          ",
		"[][]      [][]",
		"  [][][][][][]",
		"    [][][][]  "};
};

template<>
struct lockup<uni01A8::encoding>
{
	using glyph = uni01A8;
};

struct uni01AE
{
	using encoding = type::Encoding<430>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][][][]    ",
		"          [][][]    "};
};

template<>
struct lockup<uni01AE::encoding>
{
	using glyph = uni01AE;
};

struct Uhorn
{
	using encoding = type::Encoding<431>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"  [][]          [][]    ",
		"  [][][][][][][][][]    ",
		"      [][][][][]        "};
};

template<>
struct lockup<Uhorn::encoding>
{
	using glyph = Uhorn;
};

struct uhorn
{
	using encoding = type::Encoding<432>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][21] = {
		"[][]        [][][][]",
		"[][]        [][][][]",
		"[][]        [][]  []",
		"[][]        [][]  []",
		"[][]        [][][]  ",
		"[][]        [][]    ",
		"[][]        [][]    ",
		"[][]      [][][]    ",
		"[][][][][][][][]    ",
		"  [][][][]  [][]    "};
};

template<>
struct lockup<uhorn::encoding>
{
	using glyph = uhorn;
};

struct uni01B5
{
	using encoding = type::Encoding<437>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"    [][][][][][]    ",
		"    [][][][][][]    ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni01B5::encoding>
{
	using glyph = uni01B5;
};

struct uni01B6
{
	using encoding = type::Encoding<438>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][15] = {
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"  [][][][][][]",
		"  [][][][][][]",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<uni01B6::encoding>
{
	using glyph = uni01B6;
};

struct uni01BB
{
	using encoding = type::Encoding<443>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"[][][][][][][]  ",
		"[][]        [][]",
		"            [][]",
		"          [][][]",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"    [][][]      ",
		"  [][][]        ",
		"[][][]          ",
		"[][]            ",
		"[][][][][][][][]",
		"[][][][][][][][]"};
};

template<>
struct lockup<uni01BB::encoding>
{
	using glyph = uni01BB;
};

struct uni01BC
{
	using encoding = type::Encoding<444>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"[][][][][][][]  ",
		"[][][][][][][]  ",
		"[][]            ",
		"[][]            ",
		"[][][][][][]    ",
		"[][][][][][][]  ",
		"[][]      [][][]",
		"            [][]",
		"            [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][]  ",
		"  [][][][][]    "};
};

template<>
struct lockup<uni01BC::encoding>
{
	using glyph = uni01BC;
};

struct uni01C0
{
	using encoding = type::Encoding<448>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni01C0::encoding>
{
	using glyph = uni01C0;
};

struct uni01C2
{
	using encoding = type::Encoding<450>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[18][15] = {
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"[][][][][][][]",
		"[][][][][][][]",
		"      [][]    ",
		"[][][][][][][]",
		"[][][][][][][]",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    "};
};

template<>
struct lockup<uni01C2::encoding>
{
	using glyph = uni01C2;
};

struct uni01C3
{
	using encoding = type::Encoding<451>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[]  ",
		"[]  ",
		"    ",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni01C3::encoding>
{
	using glyph = uni01C3;
};

struct uni01CD
{
	using encoding = type::Encoding<461>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni01CD::encoding>
{
	using glyph = uni01CD;
};

struct uni01CE
{
	using encoding = type::Encoding<462>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"  [][]    [][]    ",
		"    [][][][]      ",
		"      [][]        ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni01CE::encoding>
{
	using glyph = uni01CE;
};

struct uni01CF
{
	using encoding = type::Encoding<463>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][13] = {
		"[][]    [][]",
		"  [][][][]  ",
		"    [][]    ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni01CF::encoding>
{
	using glyph = uni01CF;
};

struct uni01D0
{
	using encoding = type::Encoding<464>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"[][]    [][]",
		"  [][][][]  ",
		"    [][]    ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni01D0::encoding>
{
	using glyph = uni01D0;
};

struct uni01D1
{
	using encoding = type::Encoding<465>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"        [][]    [][]      ",
		"          [][][][]        ",
		"            [][]          ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni01D1::encoding>
{
	using glyph = uni01D1;
};

struct uni01D2
{
	using encoding = type::Encoding<466>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][]    [][]  ",
		"      [][][][]    ",
		"        [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni01D2::encoding>
{
	using glyph = uni01D2;
};

struct uni01D3
{
	using encoding = type::Encoding<467>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"      [][]    [][]    ",
		"        [][][][]      ",
		"          [][]        ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni01D3::encoding>
{
	using glyph = uni01D3;
};

struct uni01D4
{
	using encoding = type::Encoding<468>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni01D4::encoding>
{
	using glyph = uni01D4;
};

struct uni01D5
{
	using encoding = type::Encoding<469>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[19][23] = {
		"      [][][][][]      ",
		"                      ",
		"    [][]      [][]    ",
		"    [][]      [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni01D5::encoding>
{
	using glyph = uni01D5;
};

struct uni01D6
{
	using encoding = type::Encoding<470>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][17] = {
		"    [][][][][]  ",
		"                ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni01D6::encoding>
{
	using glyph = uni01D6;
};

struct uni01D7
{
	using encoding = type::Encoding<471>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[21][23] = {
		"            [][]      ",
		"          [][]        ",
		"        [][]          ",
		"                      ",
		"    [][]      [][]    ",
		"    [][]      [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni01D7::encoding>
{
	using glyph = uni01D7;
};

struct uni01D8
{
	using encoding = type::Encoding<472>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni01D8::encoding>
{
	using glyph = uni01D8;
};

struct uni01D9
{
	using encoding = type::Encoding<473>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[21][23] = {
		"      [][]    [][]    ",
		"        [][][][]      ",
		"          [][]        ",
		"                      ",
		"    [][]      [][]    ",
		"    [][]      [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni01D9::encoding>
{
	using glyph = uni01D9;
};

struct uni01DA
{
	using encoding = type::Encoding<474>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"                ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni01DA::encoding>
{
	using glyph = uni01DA;
};

struct uni01DB
{
	using encoding = type::Encoding<475>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[21][23] = {
		"      [][]            ",
		"        [][]          ",
		"          [][]        ",
		"                      ",
		"    [][]      [][]    ",
		"    [][]      [][]    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni01DB::encoding>
{
	using glyph = uni01DB;
};

struct uni01DC
{
	using encoding = type::Encoding<476>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"  [][]          ",
		"    [][]        ",
		"      [][]      ",
		"                ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"                ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni01DC::encoding>
{
	using glyph = uni01DC;
};

struct uni01DD
{
	using encoding = type::Encoding<477>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"    [][][][]    ",
		"[][][][][][][]  ",
		"[][]      [][][]",
		"            [][]",
		"            [][]",
		"[][][][][][][][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni01DD::encoding>
{
	using glyph = uni01DD;
};

struct uni01DE
{
	using encoding = type::Encoding<478>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[19][25] = {
		"        [][][][][]      ",
		"                        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni01DE::encoding>
{
	using glyph = uni01DE;
};

struct uni01DF
{
	using encoding = type::Encoding<479>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][19] = {
		"    [][][][][]    ",
		"                  ",
		"  [][]    [][]    ",
		"  [][]    [][]    ",
		"                  ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni01DF::encoding>
{
	using glyph = uni01DF;
};

struct uni01E0
{
	using encoding = type::Encoding<480>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[19][25] = {
		"        [][][][][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni01E0::encoding>
{
	using glyph = uni01E0;
};

struct uni01E1
{
	using encoding = type::Encoding<481>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[15][19] = {
		"    [][][][][]    ",
		"                  ",
		"      [][]        ",
		"      [][]        ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni01E1::encoding>
{
	using glyph = uni01E1;
};

struct uni01E2
{
	using encoding = type::Encoding<482>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][33] = {
		"            [][][][][]          ",
		"                                ",
		"          [][][][][][][][][][][]",
		"          [][][][][][][][][][][]",
		"        [][]  [][]              ",
		"        [][]  [][]              ",
		"      [][]    [][]              ",
		"      [][]    [][]              ",
		"    [][]      [][][][][][][][]  ",
		"    [][]      [][][][][][][][]  ",
		"    [][][][][][][]              ",
		"  [][][][][][][][]              ",
		"  [][]        [][]              ",
		"  [][]        [][]              ",
		"[][]          [][][][][][][][][]",
		"[][]          [][][][][][][][][]"};
};

template<>
struct lockup<uni01E2::encoding>
{
	using glyph = uni01E2;
};

struct uni01E3
{
	using encoding = type::Encoding<483>;
	static constexpr auto next = type::Width{17};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[12][29] = {
		"        [][][][][]          ",
		"                            ",
		"  [][][][][][]  [][][][]    ",
		"[][][]    [][][][][][][][]  ",
		"[][]        [][]        [][]",
		"          [][][]        [][]",
		"  [][][][][][][][][][][][][]",
		"[][][]      [][]            ",
		"[][]        [][]            ",
		"[][]        [][][]      [][]",
		"[][][]    [][][][][][][][][]",
		"  [][][][]  []  [][][][]    "};
};

template<>
struct lockup<uni01E3::encoding>
{
	using glyph = uni01E3;
};

struct uni01E4
{
	using encoding = type::Encoding<484>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"        [][][][][][]        ",
		"    [][][][][][][][][][]    ",
		"  [][][]            [][][]  ",
		"  [][]                [][]  ",
		"[][][]                [][]  ",
		"[][]                        ",
		"[][]                        ",
		"[][]            [][][][][]  ",
		"[][]            [][][][][]  ",
		"[][][]                [][]  ",
		"  [][]          [][][][][][]",
		"  [][][]        [][][][][][]",
		"    [][][][][][][][][][][]  ",
		"        [][][][][][]  [][]  "};
};

template<>
struct lockup<uni01E4::encoding>
{
	using glyph = uni01E4;
};

struct uni01E5
{
	using encoding = type::Encoding<485>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][19] = {
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<uni01E5::encoding>
{
	using glyph = uni01E5;
};

struct Gcaron
{
	using encoding = type::Encoding<486>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"        [][]    [][]      ",
		"          [][][][]        ",
		"            [][]          ",
		"                          ",
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<Gcaron::encoding>
{
	using glyph = Gcaron;
};

struct gcaron
{
	using encoding = type::Encoding<487>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"    [][]    [][]  ",
		"      [][][][]    ",
		"        [][]      ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<gcaron::encoding>
{
	using glyph = gcaron;
};

struct uni01E8
{
	using encoding = type::Encoding<488>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"    [][]    [][]        ",
		"      [][][][]          ",
		"        [][]            ",
		"                        ",
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]"};
};

template<>
struct lockup<uni01E8::encoding>
{
	using glyph = uni01E8;
};

struct uni01E9
{
	using encoding = type::Encoding<489>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"[][]    [][]      ",
		"  [][][][]        ",
		"    [][]          ",
		"                  ",
		"  [][]            ",
		"  [][]            ",
		"  [][]            ",
		"  [][]            ",
		"  [][]      [][]  ",
		"  [][]    [][]    ",
		"  [][]  [][]      ",
		"  [][][][]        ",
		"  [][][][][]      ",
		"  [][]  [][]      ",
		"  [][]    [][]    ",
		"  [][]    [][][]  ",
		"  [][]      [][]  ",
		"  [][]      [][][]"};
};

template<>
struct lockup<uni01E9::encoding>
{
	using glyph = uni01E9;
};

struct uni01EA
{
	using encoding = type::Encoding<490>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][27] = {
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        ",
		"          [][]            ",
		"        [][]              ",
		"        [][]              ",
		"          [][][]          "};
};

template<>
struct lockup<uni01EA::encoding>
{
	using glyph = uni01EA;
};

struct uni01EB
{
	using encoding = type::Encoding<491>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][19] = {
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    ",
		"      [][]        ",
		"    [][]          ",
		"    [][]          ",
		"      [][][]      "};
};

template<>
struct lockup<uni01EB::encoding>
{
	using glyph = uni01EB;
};

struct uni01EC
{
	using encoding = type::Encoding<492>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[20][27] = {
		"        [][][][][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        ",
		"          [][]            ",
		"        [][]              ",
		"        [][]              ",
		"          [][][]          "};
};

template<>
struct lockup<uni01EC::encoding>
{
	using glyph = uni01EC;
};

struct uni01ED
{
	using encoding = type::Encoding<493>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[16][19] = {
		"    [][][][][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    ",
		"      [][]        ",
		"    [][]          ",
		"    [][]          ",
		"      [][][]      "};
};

template<>
struct lockup<uni01ED::encoding>
{
	using glyph = uni01ED;
};

struct uni01F0
{
	using encoding = type::Encoding<496>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"[][]    [][]",
		"  [][][][]  ",
		"    [][]    ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][]    ",
		"[][][]      "};
};

template<>
struct lockup<uni01F0::encoding>
{
	using glyph = uni01F0;
};

struct uni01F4
{
	using encoding = type::Encoding<500>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"                [][]      ",
		"              [][]        ",
		"            [][]          ",
		"                          ",
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<uni01F4::encoding>
{
	using glyph = uni01F4;
};

struct uni01F5
{
	using encoding = type::Encoding<501>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"            [][]  ",
		"          [][]    ",
		"        [][]      ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<uni01F5::encoding>
{
	using glyph = uni01F5;
};

struct uni01F8
{
	using encoding = type::Encoding<504>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"    [][]              ",
		"      [][]            ",
		"        [][]          ",
		"                      ",
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni01F8::encoding>
{
	using glyph = uni01F8;
};

struct uni01F9
{
	using encoding = type::Encoding<505>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"  [][]          ",
		"    [][]        ",
		"      [][]      ",
		"                ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni01F9::encoding>
{
	using glyph = uni01F9;
};

struct Aringacute
{
	using encoding = type::Encoding<506>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[21][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"        []    []        ",
		"        []    []        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<Aringacute::encoding>
{
	using glyph = Aringacute;
};

struct aringacute
{
	using encoding = type::Encoding<507>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"      [][]        ",
		"    []    []      ",
		"    []    []      ",
		"      [][]        ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<aringacute::encoding>
{
	using glyph = aringacute;
};

struct AEacute
{
	using encoding = type::Encoding<508>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][33] = {
		"                    [][]        ",
		"                  [][]          ",
		"                [][]            ",
		"                                ",
		"          [][][][][][][][][][][]",
		"          [][][][][][][][][][][]",
		"        [][]  [][]              ",
		"        [][]  [][]              ",
		"      [][]    [][]              ",
		"      [][]    [][]              ",
		"    [][]      [][][][][][][][]  ",
		"    [][]      [][][][][][][][]  ",
		"    [][][][][][][]              ",
		"  [][][][][][][][]              ",
		"  [][]        [][]              ",
		"  [][]        [][]              ",
		"[][]          [][][][][][][][][]",
		"[][]          [][][][][][][][][]"};
};

template<>
struct lockup<AEacute::encoding>
{
	using glyph = AEacute;
};

struct aeacute
{
	using encoding = type::Encoding<509>;
	static constexpr auto next = type::Width{17};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"                [][]        ",
		"              [][]          ",
		"            [][]            ",
		"                            ",
		"  [][][][][][]  [][][][]    ",
		"[][][]    [][][][][][][][]  ",
		"[][]        [][]        [][]",
		"          [][][]        [][]",
		"  [][][][][][][][][][][][][]",
		"[][][]      [][]            ",
		"[][]        [][]            ",
		"[][]        [][][]      [][]",
		"[][][]    [][][][][][][][][]",
		"  [][][][]  []  [][][][]    "};
};

template<>
struct lockup<aeacute::encoding>
{
	using glyph = aeacute;
};

struct Oslashacute
{
	using encoding = type::Encoding<510>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][29] = {
		"                [][]        ",
		"              [][]          ",
		"            [][]            ",
		"                            ",
		"          [][][][][]    [][]",
		"      [][][][][][][][][][]  ",
		"    [][][]          [][]    ",
		"    [][]          [][][][]  ",
		"  [][][]        [][]  [][][]",
		"  [][]        [][]      [][]",
		"  [][]      [][]        [][]",
		"  [][]      []          [][]",
		"  [][]    [][]          [][]",
		"  [][]  [][]          [][][]",
		"    [][][]            [][]  ",
		"    [][][]          [][][]  ",
		"  [][]  [][][][][][][][]    ",
		"[][]      [][][][][]        "};
};

template<>
struct lockup<Oslashacute::encoding>
{
	using glyph = Oslashacute;
};

struct oslashacute
{
	using encoding = type::Encoding<511>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"              [][]    ",
		"            [][]      ",
		"          [][]        ",
		"                      ",
		"        [][][]    [][]",
		"    [][][][][][][][]  ",
		"    [][]      [][]    ",
		"  [][]      [][][][]  ",
		"  [][]    [][]  [][]  ",
		"  [][]  [][]    [][]  ",
		"  [][][][]      [][]  ",
		"    [][]      [][]    ",
		"  [][][][][][][][]    ",
		"[][]    [][][]        "};
};

template<>
struct lockup<oslashacute::encoding>
{
	using glyph = oslashacute;
};

struct uni0200
{
	using encoding = type::Encoding<512>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"    [][]  [][]          ",
		"      [][]  [][]        ",
		"        [][]  [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni0200::encoding>
{
	using glyph = uni0200;
};

struct uni0201
{
	using encoding = type::Encoding<513>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"[][]  [][]        ",
		"  [][]  [][]      ",
		"    [][]  [][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni0201::encoding>
{
	using glyph = uni0201;
};

struct uni0202
{
	using encoding = type::Encoding<514>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      []        []      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni0202::encoding>
{
	using glyph = uni0202;
};

struct uni0203
{
	using encoding = type::Encoding<515>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"    [][][][]      ",
		"  [][]    [][]    ",
		"  []        []    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni0203::encoding>
{
	using glyph = uni0203;
};

struct uni0204
{
	using encoding = type::Encoding<516>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"[][]  [][]          ",
		"  [][]  [][]        ",
		"    [][]  [][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni0204::encoding>
{
	using glyph = uni0204;
};

struct uni0205
{
	using encoding = type::Encoding<517>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"[][]  [][]      ",
		"  [][]  [][]    ",
		"    [][]  [][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni0205::encoding>
{
	using glyph = uni0205;
};

struct uni0206
{
	using encoding = type::Encoding<518>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"      [][][][]      ",
		"    [][]    [][]    ",
		"    []        []    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni0206::encoding>
{
	using glyph = uni0206;
};

struct uni0207
{
	using encoding = type::Encoding<519>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][][][]    ",
		"  [][]    [][]  ",
		"  []        []  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni0207::encoding>
{
	using glyph = uni0207;
};

struct uni0208
{
	using encoding = type::Encoding<520>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[18][15] = {
		"[][]  [][]    ",
		"  [][]  [][]  ",
		"    [][]  [][]",
		"              ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    "};
};

template<>
struct lockup<uni0208::encoding>
{
	using glyph = uni0208;
};

struct uni0209
{
	using encoding = type::Encoding<521>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-2}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"[][]  [][]    ",
		"  [][]  [][]  ",
		"    [][]  [][]",
		"              ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    ",
		"      [][]    "};
};

template<>
struct lockup<uni0209::encoding>
{
	using glyph = uni0209;
};

struct uni020A
{
	using encoding = type::Encoding<522>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][13] = {
		"  [][][][]  ",
		"[][]    [][]",
		"[]        []",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni020A::encoding>
{
	using glyph = uni020A;
};

struct uni020B
{
	using encoding = type::Encoding<523>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"  [][][][]  ",
		"[][]    [][]",
		"[]        []",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni020B::encoding>
{
	using glyph = uni020B;
};

struct uni020C
{
	using encoding = type::Encoding<524>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"    [][]  [][]            ",
		"      [][]  [][]          ",
		"        [][]  [][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni020C::encoding>
{
	using glyph = uni020C;
};

struct uni020D
{
	using encoding = type::Encoding<525>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"[][]  [][]        ",
		"  [][]  [][]      ",
		"    [][]  [][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni020D::encoding>
{
	using glyph = uni020D;
};

struct uni020E
{
	using encoding = type::Encoding<526>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][27] = {
		"          [][][][]        ",
		"        [][]    [][]      ",
		"        []        []      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni020E::encoding>
{
	using glyph = uni020E;
};

struct uni020F
{
	using encoding = type::Encoding<527>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"      [][][][]    ",
		"    [][]    [][]  ",
		"    []        []  ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni020F::encoding>
{
	using glyph = uni020F;
};

struct uni0210
{
	using encoding = type::Encoding<528>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"  [][]  [][]          ",
		"    [][]  [][]        ",
		"      [][]  [][]      ",
		"                      ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni0210::encoding>
{
	using glyph = uni0210;
};

struct uni0211
{
	using encoding = type::Encoding<529>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"[][]  [][]    ",
		"  [][]  [][]  ",
		"    [][]  [][]",
		"              ",
		"    [][]  [][]",
		"    [][]  [][]",
		"    [][][]    ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      "};
};

template<>
struct lockup<uni0211::encoding>
{
	using glyph = uni0211;
};

struct uni0212
{
	using encoding = type::Encoding<530>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"      [][][][]        ",
		"    [][]    [][]      ",
		"    []        []      ",
		"                      ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni0212::encoding>
{
	using glyph = uni0212;
};

struct uni0213
{
	using encoding = type::Encoding<531>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][13] = {
		"  [][][][]  ",
		"[][]    [][]",
		"[]        []",
		"            ",
		"  [][]  [][]",
		"  [][]  [][]",
		"  [][][]    ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      "};
};

template<>
struct lockup<uni0213::encoding>
{
	using glyph = uni0213;
};

struct uni0214
{
	using encoding = type::Encoding<532>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"  [][]  [][]          ",
		"    [][]  [][]        ",
		"      [][]  [][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni0214::encoding>
{
	using glyph = uni0214;
};

struct uni0215
{
	using encoding = type::Encoding<533>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"[][]  [][]      ",
		"  [][]  [][]    ",
		"    [][]  [][]  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni0215::encoding>
{
	using glyph = uni0215;
};

struct uni0216
{
	using encoding = type::Encoding<534>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"        [][][][]      ",
		"      [][]    [][]    ",
		"      []        []    ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni0216::encoding>
{
	using glyph = uni0216;
};

struct uni0217
{
	using encoding = type::Encoding<535>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][][][]    ",
		"  [][]    [][]  ",
		"  []        []  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni0217::encoding>
{
	using glyph = uni0217;
};

struct Scommaaccent
{
	using encoding = type::Encoding<536>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[20][21] = {
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    ",
		"                    ",
		"        [][]        ",
		"        [][]        ",
		"          []        ",
		"          []        ",
		"        []          "};
};

template<>
struct lockup<Scommaaccent::encoding>
{
	using glyph = Scommaaccent;
};

struct scommaaccent
{
	using encoding = type::Encoding<537>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-6}};
	static constexpr char bitmap[16][15] = {
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    ",
		"              ",
		"    [][]      ",
		"    [][]      ",
		"      []      ",
		"      []      ",
		"    []        "};
};

template<>
struct lockup<scommaaccent::encoding>
{
	using glyph = scommaaccent;
};

struct uni021E
{
	using encoding = type::Encoding<542>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][23] = {
		"      [][]    [][]    ",
		"        [][][][]      ",
		"          [][]        ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni021E::encoding>
{
	using glyph = uni021E;
};

struct uni021F
{
	using encoding = type::Encoding<543>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"[][]    [][]      ",
		"  [][][][]        ",
		"    [][]          ",
		"                  ",
		"  [][]            ",
		"  [][]            ",
		"  [][]            ",
		"  [][]            ",
		"  [][]  [][][][]  ",
		"  [][][][][][][][]",
		"  [][][]      [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]        [][]"};
};

template<>
struct lockup<uni021F::encoding>
{
	using glyph = uni021F;
};

struct uni0226
{
	using encoding = type::Encoding<550>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"          [][]          ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni0226::encoding>
{
	using glyph = uni0226;
};

struct uni0227
{
	using encoding = type::Encoding<551>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][19] = {
		"      [][]        ",
		"      [][]        ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni0227::encoding>
{
	using glyph = uni0227;
};

struct uni0228
{
	using encoding = type::Encoding<552>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"      [][][]        ",
		"          [][]      ",
		"    [][]  [][]      ",
		"    [][][][]        "};
};

template<>
struct lockup<uni0228::encoding>
{
	using glyph = uni0228;
};

struct uni0229
{
	using encoding = type::Encoding<553>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"      [][][]    ",
		"          [][]  ",
		"    [][]  [][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni0229::encoding>
{
	using glyph = uni0229;
};

struct uni022A
{
	using encoding = type::Encoding<554>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[19][27] = {
		"        [][][][][]        ",
		"                          ",
		"        [][]    [][]      ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni022A::encoding>
{
	using glyph = uni022A;
};

struct uni022B
{
	using encoding = type::Encoding<555>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][19] = {
		"    [][][][][]    ",
		"                  ",
		"    [][]    [][]  ",
		"    [][]    [][]  ",
		"                  ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni022B::encoding>
{
	using glyph = uni022B;
};

struct uni022C
{
	using encoding = type::Encoding<556>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[20][27] = {
		"        [][][][][]        ",
		"                          ",
		"          [][]    []      ",
		"        []  [][]  []      ",
		"        []    [][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni022C::encoding>
{
	using glyph = uni022C;
};

struct uni022D
{
	using encoding = type::Encoding<557>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][19] = {
		"    [][][][][]    ",
		"                  ",
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni022D::encoding>
{
	using glyph = uni022D;
};

struct uni022E
{
	using encoding = type::Encoding<558>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][27] = {
		"            [][]          ",
		"            [][]          ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni022E::encoding>
{
	using glyph = uni022E;
};

struct uni022F
{
	using encoding = type::Encoding<559>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][19] = {
		"        [][]      ",
		"        [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni022F::encoding>
{
	using glyph = uni022F;
};

struct uni0230
{
	using encoding = type::Encoding<560>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[19][27] = {
		"        [][][][][]        ",
		"                          ",
		"            [][]          ",
		"            [][]          ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni0230::encoding>
{
	using glyph = uni0230;
};

struct uni0231
{
	using encoding = type::Encoding<561>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[15][19] = {
		"    [][][][][]    ",
		"                  ",
		"        [][]      ",
		"        [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni0231::encoding>
{
	using glyph = uni0231;
};

struct uni0232
{
	using encoding = type::Encoding<562>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[16][25] = {
		"        [][][][][]      ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni0232::encoding>
{
	using glyph = uni0232;
};

struct uni0233
{
	using encoding = type::Encoding<563>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[16][17] = {
		"    [][][][][]  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<uni0233::encoding>
{
	using glyph = uni0233;
};

struct uni0250
{
	using encoding = type::Encoding<592>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][19] = {
		"[][]    [][][][]  ",
		"[][][][]    [][][]",
		"  [][]        [][]",
		"  [][]        [][]",
		"  [][]      [][][]",
		"  [][][][][][][]  ",
		"  [][][]          ",
		"  [][]        [][]",
		"  [][][]    [][][]",
		"    [][][][][][]  "};
};

template<>
struct lockup<uni0250::encoding>
{
	using glyph = uni0250;
};

struct uni0254
{
	using encoding = type::Encoding<596>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"  [][][][][]    ",
		"[][][][][][][]  ",
		"[][]      [][]  ",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"[][]      [][]  ",
		"[][][][][][][]  ",
		"  [][][][][]    "};
};

template<>
struct lockup<uni0254::encoding>
{
	using glyph = uni0254;
};

struct uni0258
{
	using encoding = type::Encoding<600>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"            [][]",
		"            [][]",
		"[][]      [][][]",
		"[][][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni0258::encoding>
{
	using glyph = uni0258;
};

struct uni0259
{
	using encoding = type::Encoding<601>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"    [][][][]    ",
		"[][][][][][][]  ",
		"[][]      [][][]",
		"            [][]",
		"            [][]",
		"[][][][][][][][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][][][][][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni0259::encoding>
{
	using glyph = uni0259;
};

struct uni025F
{
	using encoding = type::Encoding<607>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[14][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"[][][][]    ",
		"[][][]      "};
};

template<>
struct lockup<uni025F::encoding>
{
	using glyph = uni025F;
};

struct uni0265
{
	using encoding = type::Encoding<613>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]"};
};

template<>
struct lockup<uni0265::encoding>
{
	using glyph = uni0265;
};

struct uni0275
{
	using encoding = type::Encoding<629>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][19] = {
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni0275::encoding>
{
	using glyph = uni0275;
};

struct uni0279
{
	using encoding = type::Encoding<633>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][11] = {
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"      [][]",
		"    [][][]",
		"[][]  [][]",
		"[][]  [][]"};
};

template<>
struct lockup<uni0279::encoding>
{
	using glyph = uni0279;
};

struct uni0287
{
	using encoding = type::Encoding<647>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[13][13] = {
		"[][][]      ",
		"[][][][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni0287::encoding>
{
	using glyph = uni0287;
};

struct uni0288
{
	using encoding = type::Encoding<648>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[17][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]"};
};

template<>
struct lockup<uni0288::encoding>
{
	using glyph = uni0288;
};

struct uni0289
{
	using encoding = type::Encoding<649>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni0289::encoding>
{
	using glyph = uni0289;
};

struct uni028C
{
	using encoding = type::Encoding<652>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][17] = {
		"      [][]      ",
		"      [][]      ",
		"    [][][][]    ",
		"    []    []    ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni028C::encoding>
{
	using glyph = uni028C;
};

struct uni028D
{
	using encoding = type::Encoding<653>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][25] = {
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][][]    [][][]    ",
		"    []  []    []  []    ",
		"  [][]  []    []  [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]"};
};

template<>
struct lockup<uni028D::encoding>
{
	using glyph = uni028D;
};

struct uni028E
{
	using encoding = type::Encoding<654>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"        [][][]  ",
		"        [][][]  ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"    [][][][]    ",
		"    []    []    ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni028E::encoding>
{
	using glyph = uni028E;
};

struct uni029E
{
	using encoding = type::Encoding<670>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][][]      [][]",
		"  [][]      [][]",
		"  [][][]    [][]",
		"    [][]    [][]",
		"      [][]  [][]",
		"      [][][][][]",
		"        [][][][]",
		"      [][]  [][]",
		"    [][]    [][]",
		"  [][]      [][]",
		"            [][]",
		"            [][]",
		"            [][]",
		"            [][]"};
};

template<>
struct lockup<uni029E::encoding>
{
	using glyph = uni029E;
};

struct uni02BB
{
	using encoding = type::Encoding<699>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][5] = {
		"  []",
		"[]  ",
		"[]  ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni02BB::encoding>
{
	using glyph = uni02BB;
};

struct afii57929
{
	using encoding = type::Encoding<700>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][5] = {
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<afii57929::encoding>
{
	using glyph = afii57929;
};

struct afii64937
{
	using encoding = type::Encoding<701>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][5] = {
		"[][]",
		"[][]",
		"[]  ",
		"[]  ",
		"  []"};
};

template<>
struct lockup<afii64937::encoding>
{
	using glyph = afii64937;
};

struct circumflex
{
	using encoding = type::Encoding<710>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][13] = {
		"    [][]    ",
		"  [][][][]  ",
		"[][]    [][]"};
};

template<>
struct lockup<circumflex::encoding>
{
	using glyph = circumflex;
};

struct caron
{
	using encoding = type::Encoding<711>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][13] = {
		"[][]    [][]",
		"  [][][][]  ",
		"    [][]    "};
};

template<>
struct lockup<caron::encoding>
{
	using glyph = caron;
};

struct uni02C8
{
	using encoding = type::Encoding<712>;
	static constexpr auto next = type::Width{3};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][3] = {
		"[]",
		"[]",
		"[]",
		"[]",
		"[]"};
};

template<>
struct lockup<uni02C8::encoding>
{
	using glyph = uni02C8;
};

struct uni02CA
{
	using encoding = type::Encoding<714>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    "};
};

template<>
struct lockup<uni02CA::encoding>
{
	using glyph = uni02CA;
};

struct uni02CB
{
	using encoding = type::Encoding<715>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][9] = {
		"[][]    ",
		"  [][]  ",
		"    [][]"};
};

template<>
struct lockup<uni02CB::encoding>
{
	using glyph = uni02CB;
};

struct uni02CD
{
	using encoding = type::Encoding<717>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-2}};
	static constexpr char bitmap[1][11] = {
		"[][][][][]"};
};

template<>
struct lockup<uni02CD::encoding>
{
	using glyph = uni02CD;
};

struct uni02CE
{
	using encoding = type::Encoding<718>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[3][9] = {
		"[][]    ",
		"  [][]  ",
		"    [][]"};
};

template<>
struct lockup<uni02CE::encoding>
{
	using glyph = uni02CE;
};

struct uni02CF
{
	using encoding = type::Encoding<719>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[3][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    "};
};

template<>
struct lockup<uni02CF::encoding>
{
	using glyph = uni02CF;
};

struct breve
{
	using encoding = type::Encoding<728>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][13] = {
		"[]        []",
		"[][]    [][]",
		"  [][][][]  "};
};

template<>
struct lockup<breve::encoding>
{
	using glyph = breve;
};

struct dotaccent
{
	using encoding = type::Encoding<729>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{12}};
	static constexpr char bitmap[2][5] = {
		"[][]",
		"[][]"};
};

template<>
struct lockup<dotaccent::encoding>
{
	using glyph = dotaccent;
};

struct ring
{
	using encoding = type::Encoding<730>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{4}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{10}};
	static constexpr char bitmap[4][11] = {
		"  [][][]  ",
		"[][]  [][]",
		"[][]  [][]",
		"  [][][]  "};
};

template<>
struct lockup<ring::encoding>
{
	using glyph = ring;
};

struct ogonek
{
	using encoding = type::Encoding<731>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[5][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    ",
		"[][]    ",
		"  [][][]"};
};

template<>
struct lockup<ogonek::encoding>
{
	using glyph = ogonek;
};

struct tilde
{
	using encoding = type::Encoding<732>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][13] = {
		"  [][]    []",
		"[]  [][]  []",
		"[]    [][]  "};
};

template<>
struct lockup<tilde::encoding>
{
	using glyph = tilde;
};

struct hungarumlaut
{
	using encoding = type::Encoding<733>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{11}};
	static constexpr char bitmap[3][15] = {
		"    [][]  [][]",
		"  [][]  [][]  ",
		"[][]  [][]    "};
};

template<>
struct lockup<hungarumlaut::encoding>
{
	using glyph = hungarumlaut;
};

struct uni02EE
{
	using encoding = type::Encoding<750>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"  []    []",
		"  []    []",
		"[]    []  "};
};

template<>
struct lockup<uni02EE::encoding>
{
	using glyph = uni02EE;
};

struct uni037E
{
	using encoding = type::Encoding<894>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<uni037E::encoding>
{
	using glyph = uni037E;
};

struct tonos
{
	using encoding = type::Encoding<900>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{3}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{11}};
	static constexpr char bitmap[3][9] = {
		"    [][]",
		"  [][]  ",
		"[][]    "};
};

template<>
struct lockup<tonos::encoding>
{
	using glyph = tonos;
};

struct dieresistonos
{
	using encoding = type::Encoding<901>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{6}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{12}};
	static constexpr char bitmap[6][11] = {
		"      [][]",
		"    [][]  ",
		"  [][]    ",
		"          ",
		"[][]  [][]",
		"[][]  [][]"};
};

template<>
struct lockup<dieresistonos::encoding>
{
	using glyph = dieresistonos;
};

struct anoteleia
{
	using encoding = type::Encoding<903>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{4}};
	static constexpr char bitmap[2][5] = {
		"[][]",
		"[][]"};
};

template<>
struct lockup<anoteleia::encoding>
{
	using glyph = anoteleia;
};

struct uni1E00
{
	using encoding = type::Encoding<7680>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-5}};
	static constexpr char bitmap[19][25] = {
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"                        ",
		"          [][][]        ",
		"        [][]  [][]      ",
		"        [][]  [][]      ",
		"          [][][]        "};
};

template<>
struct lockup<uni1E00::encoding>
{
	using glyph = uni1E00;
};

struct uni1E01
{
	using encoding = type::Encoding<7681>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-5}};
	static constexpr char bitmap[15][19] = {
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]",
		"                  ",
		"      [][][]      ",
		"    [][]  [][]    ",
		"    [][]  [][]    ",
		"      [][][]      "};
};

template<>
struct lockup<uni1E01::encoding>
{
	using glyph = uni1E01;
};

struct uni1E02
{
	using encoding = type::Encoding<7682>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"        [][]          ",
		"        [][]          ",
		"                      ",
		"[][][][][][][][]      ",
		"[][][][][][][][][]    ",
		"[][]          [][][]  ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]          [][]    ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    "};
};

template<>
struct lockup<uni1E02::encoding>
{
	using glyph = uni1E02;
};

struct uni1E03
{
	using encoding = type::Encoding<7683>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][19] = {
		"  [][]            ",
		"  [][]            ",
		"                  ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    "};
};

template<>
struct lockup<uni1E03::encoding>
{
	using glyph = uni1E03;
};

struct uni1E04
{
	using encoding = type::Encoding<7684>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][23] = {
		"[][][][][][][][]      ",
		"[][][][][][][][][]    ",
		"[][]          [][][]  ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]          [][]    ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"                      ",
		"        [][]          ",
		"        [][]          "};
};

template<>
struct lockup<uni1E04::encoding>
{
	using glyph = uni1E04;
};

struct uni1E05
{
	using encoding = type::Encoding<7685>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    ",
		"                  ",
		"      [][]        ",
		"      [][]        "};
};

template<>
struct lockup<uni1E05::encoding>
{
	using glyph = uni1E05;
};

struct uni1E06
{
	using encoding = type::Encoding<7686>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][23] = {
		"[][][][][][][][]      ",
		"[][][][][][][][][]    ",
		"[][]          [][][]  ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]          [][]    ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"                      ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni1E06::encoding>
{
	using glyph = uni1E06;
};

struct uni1E07
{
	using encoding = type::Encoding<7687>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    ",
		"                  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E07::encoding>
{
	using glyph = uni1E07;
};

struct uni1E08
{
	using encoding = type::Encoding<7688>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[22][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"        [][][][][]      ",
		"    [][][][][][][][][]  ",
		"  [][][]          [][][]",
		"  [][]              [][]",
		"[][][]                  ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][]                    ",
		"[][][]                  ",
		"  [][]              [][]",
		"  [][][]          [][][]",
		"    [][][][][][][][][]  ",
		"        [][][][][]      ",
		"          [][]          ",
		"            [][]        ",
		"      [][]  [][]        ",
		"      [][][][]          "};
};

template<>
struct lockup<uni1E08::encoding>
{
	using glyph = uni1E08;
};

struct uni1E09
{
	using encoding = type::Encoding<7689>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"    [][][][][]  ",
		"  [][][][][][][]",
		"  [][]      [][]",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"  [][]      [][]",
		"  [][][][][][][]",
		"    [][][][][]  ",
		"      [][]      ",
		"        [][]    ",
		"  [][]  [][]    ",
		"  [][][][]      "};
};

template<>
struct lockup<uni1E09::encoding>
{
	using glyph = uni1E09;
};

struct uni1E0A
{
	using encoding = type::Encoding<7690>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"        [][]            ",
		"        [][]            ",
		"                        ",
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      "};
};

template<>
struct lockup<uni1E0A::encoding>
{
	using glyph = uni1E0A;
};

struct uni1E0B
{
	using encoding = type::Encoding<7691>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][19] = {
		"            [][]  ",
		"            [][]  ",
		"                  ",
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]"};
};

template<>
struct lockup<uni1E0B::encoding>
{
	using glyph = uni1E0B;
};

struct uni1E0C
{
	using encoding = type::Encoding<7692>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][25] = {
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      ",
		"                        ",
		"        [][]            ",
		"        [][]            "};
};

template<>
struct lockup<uni1E0C::encoding>
{
	using glyph = uni1E0C;
};

struct uni1E0D
{
	using encoding = type::Encoding<7693>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][19] = {
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"                  ",
		"        [][]      ",
		"        [][]      "};
};

template<>
struct lockup<uni1E0D::encoding>
{
	using glyph = uni1E0D;
};

struct uni1E0E
{
	using encoding = type::Encoding<7694>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][25] = {
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      ",
		"                        ",
		"      [][][][][]        "};
};

template<>
struct lockup<uni1E0E::encoding>
{
	using glyph = uni1E0E;
};

struct uni1E0F
{
	using encoding = type::Encoding<7695>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][19] = {
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"                  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E0F::encoding>
{
	using glyph = uni1E0F;
};

struct uni1E10
{
	using encoding = type::Encoding<7696>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][25] = {
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      ",
		"        [][][]          ",
		"            [][]        ",
		"      [][]  [][]        ",
		"      [][][][]          "};
};

template<>
struct lockup<uni1E10::encoding>
{
	using glyph = uni1E10;
};

struct uni1E11
{
	using encoding = type::Encoding<7697>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"        [][][]    ",
		"            [][]  ",
		"      [][]  [][]  ",
		"      [][][][]    "};
};

template<>
struct lockup<uni1E11::encoding>
{
	using glyph = uni1E11;
};

struct uni1E12
{
	using encoding = type::Encoding<7698>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][25] = {
		"[][][][][][][][][]      ",
		"[][][][][][][][][][]    ",
		"[][]            [][][]  ",
		"[][]              [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]                [][]",
		"[][]              [][]  ",
		"[][]            [][][]  ",
		"[][][][][][][][][][]    ",
		"[][][][][][][][][]      ",
		"                        ",
		"        [][]            ",
		"      [][][][]          ",
		"    [][]    [][]        "};
};

template<>
struct lockup<uni1E12::encoding>
{
	using glyph = uni1E12;
};

struct uni1E13
{
	using encoding = type::Encoding<7699>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]      [][][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"                  ",
		"        [][]      ",
		"      [][][][]    ",
		"    [][]    [][]  "};
};

template<>
struct lockup<uni1E13::encoding>
{
	using glyph = uni1E13;
};

struct uni1E14
{
	using encoding = type::Encoding<7700>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[20][21] = {
		"    [][]            ",
		"      [][]          ",
		"        [][]        ",
		"                    ",
		"    [][][][][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1E14::encoding>
{
	using glyph = uni1E14;
};

struct uni1E15
{
	using encoding = type::Encoding<7701>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][17] = {
		"  [][]          ",
		"    [][]        ",
		"      [][]      ",
		"                ",
		"    [][][][][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni1E15::encoding>
{
	using glyph = uni1E15;
};

struct uni1E16
{
	using encoding = type::Encoding<7702>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[20][21] = {
		"          [][]      ",
		"        [][]        ",
		"      [][]          ",
		"                    ",
		"    [][][][][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1E16::encoding>
{
	using glyph = uni1E16;
};

struct uni1E17
{
	using encoding = type::Encoding<7703>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"    [][][][][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni1E17::encoding>
{
	using glyph = uni1E17;
};

struct uni1E18
{
	using encoding = type::Encoding<7704>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                    ",
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    "};
};

template<>
struct lockup<uni1E18::encoding>
{
	using glyph = uni1E18;
};

struct uni1E19
{
	using encoding = type::Encoding<7705>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"                ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  "};
};

template<>
struct lockup<uni1E19::encoding>
{
	using glyph = uni1E19;
};

struct uni1E1A
{
	using encoding = type::Encoding<7706>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                    ",
		"    [][]    []      ",
		"  []  [][]  []      ",
		"  []    [][]        "};
};

template<>
struct lockup<uni1E1A::encoding>
{
	using glyph = uni1E1A;
};

struct uni1E1B
{
	using encoding = type::Encoding<7707>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"                ",
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    "};
};

template<>
struct lockup<uni1E1B::encoding>
{
	using glyph = uni1E1B;
};

struct uni1E1C
{
	using encoding = type::Encoding<7708>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-4}};
	static constexpr char bitmap[22][21] = {
		"  []        []      ",
		"  [][]    [][]      ",
		"    [][][][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"      [][][]        ",
		"          [][]      ",
		"    [][]  [][]      ",
		"    [][][][]        "};
};

template<>
struct lockup<uni1E1C::encoding>
{
	using glyph = uni1E1C;
};

struct uni1E1D
{
	using encoding = type::Encoding<7709>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"  []        []  ",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"      [][][]    ",
		"          [][]  ",
		"    [][]  [][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni1E1D::encoding>
{
	using glyph = uni1E1D;
};

struct uni1E1E
{
	using encoding = type::Encoding<7710>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[17][19] = {
		"      [][]        ",
		"      [][]        ",
		"                  ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][]  ",
		"[][][][][][][][]  ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<uni1E1E::encoding>
{
	using glyph = uni1E1E;
};

struct uni1E1F
{
	using encoding = type::Encoding<7711>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][13] = {
		"      [][]  ",
		"      [][]  ",
		"            ",
		"      [][][]",
		"    [][][][]",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni1E1F::encoding>
{
	using glyph = uni1E1F;
};

struct uni1E20
{
	using encoding = type::Encoding<7712>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][27] = {
		"        [][][][][]        ",
		"                          ",
		"        [][][][][][]      ",
		"    [][][][][][][][][][]  ",
		"  [][][]            [][][]",
		"  [][]                [][]",
		"[][][]                [][]",
		"[][]                      ",
		"[][]                      ",
		"[][]            [][][][][]",
		"[][]            [][][][][]",
		"[][][]                [][]",
		"  [][]                [][]",
		"  [][][]            [][][]",
		"    [][][][][][][][][][][]",
		"        [][][][][][]  [][]"};
};

template<>
struct lockup<uni1E20::encoding>
{
	using glyph = uni1E20;
};

struct uni1E21
{
	using encoding = type::Encoding<7713>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[16][19] = {
		"    [][][][][]    ",
		"                  ",
		"    [][][][]  [][]",
		"  [][][][][][][][]",
		"  [][]        [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][][]",
		"  [][][][][][][][]",
		"    [][][][]  [][]",
		"              [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"      [][][]      "};
};

template<>
struct lockup<uni1E21::encoding>
{
	using glyph = uni1E21;
};

struct uni1E22
{
	using encoding = type::Encoding<7714>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"          [][]        ",
		"          [][]        ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni1E22::encoding>
{
	using glyph = uni1E22;
};

struct uni1E23
{
	using encoding = type::Encoding<7715>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][17] = {
		"  [][]          ",
		"  [][]          ",
		"                ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni1E23::encoding>
{
	using glyph = uni1E23;
};

struct uni1E24
{
	using encoding = type::Encoding<7716>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"          [][]        "};
};

template<>
struct lockup<uni1E24::encoding>
{
	using glyph = uni1E24;
};

struct uni1E25
{
	using encoding = type::Encoding<7717>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1E25::encoding>
{
	using glyph = uni1E25;
};

struct uni1E26
{
	using encoding = type::Encoding<7718>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"      [][]  [][]      ",
		"      [][]  [][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni1E26::encoding>
{
	using glyph = uni1E26;
};

struct uni1E27
{
	using encoding = type::Encoding<7719>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][17] = {
		"[][]  [][]      ",
		"[][]  [][]      ",
		"                ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni1E27::encoding>
{
	using glyph = uni1E27;
};

struct uni1E28
{
	using encoding = type::Encoding<7720>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]    [][]      [][]",
		"        [][][]        ",
		"            [][]      ",
		"      [][]  [][]      ",
		"      [][][][]        "};
};

template<>
struct lockup<uni1E28::encoding>
{
	using glyph = uni1E28;
};

struct uni1E29
{
	using encoding = type::Encoding<7721>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]  [][]  [][]",
		"      [][][]    ",
		"          [][]  ",
		"    [][]  [][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni1E29::encoding>
{
	using glyph = uni1E29;
};

struct uni1E2A
{
	using encoding = type::Encoding<7722>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"                      ",
		"      []        []    ",
		"      [][]    [][]    ",
		"        [][][][]      "};
};

template<>
struct lockup<uni1E2A::encoding>
{
	using glyph = uni1E2A;
};

struct uni1E2B
{
	using encoding = type::Encoding<7723>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"  []        []  ",
		"  [][]    [][]  ",
		"    [][][][]    "};
};

template<>
struct lockup<uni1E2B::encoding>
{
	using glyph = uni1E2B;
};

struct uni1E2C
{
	using encoding = type::Encoding<7724>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"            ",
		"  [][]    []",
		"[]  [][]  []",
		"[]    [][]  "};
};

template<>
struct lockup<uni1E2C::encoding>
{
	using glyph = uni1E2C;
};

struct uni1E2D
{
	using encoding = type::Encoding<7725>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"    [][]    ",
		"    [][]    ",
		"            ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"            ",
		"  [][]    []",
		"[]  [][]  []",
		"[]    [][]  "};
};

template<>
struct lockup<uni1E2D::encoding>
{
	using glyph = uni1E2D;
};

struct uni1E2E
{
	using encoding = type::Encoding<7726>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[21][13] = {
		"        [][]",
		"      [][]  ",
		"    [][]    ",
		"            ",
		"[][]    [][]",
		"[][]    [][]",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    "};
};

template<>
struct lockup<uni1E2E::encoding>
{
	using glyph = uni1E2E;
};

struct uni1E2F
{
	using encoding = type::Encoding<7727>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][11] = {
		"      [][]",
		"    [][]  ",
		"  [][]    ",
		"          ",
		"[][]  [][]",
		"[][]  [][]",
		"          ",
		"          ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<uni1E2F::encoding>
{
	using glyph = uni1E2F;
};

struct uni1E30
{
	using encoding = type::Encoding<7728>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"            [][]        ",
		"          [][]          ",
		"        [][]            ",
		"                        ",
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]"};
};

template<>
struct lockup<uni1E30::encoding>
{
	using glyph = uni1E30;
};

struct uni1E31
{
	using encoding = type::Encoding<7729>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"      [][]      ",
		"    [][]        ",
		"  [][]          ",
		"                ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]      [][]  ",
		"[][]    [][]    ",
		"[][]  [][]      ",
		"[][][][]        ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"[][]    [][]    ",
		"[][]    [][][]  ",
		"[][]      [][]  ",
		"[][]      [][][]"};
};

template<>
struct lockup<uni1E31::encoding>
{
	using glyph = uni1E31;
};

struct uni1E32
{
	using encoding = type::Encoding<7730>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-3}};
	static constexpr char bitmap[17][25] = {
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1E32::encoding>
{
	using glyph = uni1E32;
};

struct uni1E33
{
	using encoding = type::Encoding<7731>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]      [][]  ",
		"[][]    [][]    ",
		"[][]  [][]      ",
		"[][][][]        ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"[][]    [][]    ",
		"[][]    [][][]  ",
		"[][]      [][]  ",
		"[][]      [][][]",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1E33::encoding>
{
	using glyph = uni1E33;
};

struct uni1E34
{
	using encoding = type::Encoding<7732>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-2}};
	static constexpr char bitmap[16][25] = {
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]",
		"                        ",
		"      [][][][][]        "};
};

template<>
struct lockup<uni1E34::encoding>
{
	using glyph = uni1E34;
};

struct uni1E35
{
	using encoding = type::Encoding<7733>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]      [][]  ",
		"[][]    [][]    ",
		"[][]  [][]      ",
		"[][][][]        ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"[][]    [][]    ",
		"[][]    [][][]  ",
		"[][]      [][]  ",
		"[][]      [][][]",
		"                ",
		"  [][][][][]    "};
};

template<>
struct lockup<uni1E35::encoding>
{
	using glyph = uni1E35;
};

struct uni1E36
{
	using encoding = type::Encoding<7734>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"                  ",
		"      [][]        ",
		"      [][]        "};
};

template<>
struct lockup<uni1E36::encoding>
{
	using glyph = uni1E36;
};

struct uni1E37
{
	using encoding = type::Encoding<7735>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni1E37::encoding>
{
	using glyph = uni1E37;
};

struct uni1E38
{
	using encoding = type::Encoding<7736>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[19][19] = {
		"[][][][][]        ",
		"                  ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"                  ",
		"      [][]        ",
		"      [][]        "};
};

template<>
struct lockup<uni1E38::encoding>
{
	using glyph = uni1E38;
};

struct uni1E39
{
	using encoding = type::Encoding<7737>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[19][11] = {
		"[][][][][]",
		"          ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"          ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<uni1E39::encoding>
{
	using glyph = uni1E39;
};

struct uni1E3A
{
	using encoding = type::Encoding<7738>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"                  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E3A::encoding>
{
	using glyph = uni1E3A;
};

struct uni1E3B
{
	using encoding = type::Encoding<7739>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-2}};
	static constexpr char bitmap[16][11] = {
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"  [][]    ",
		"          ",
		"[][][][][]"};
};

template<>
struct lockup<uni1E3B::encoding>
{
	using glyph = uni1E3B;
};

struct uni1E3C
{
	using encoding = type::Encoding<7740>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][][][][][][][][]",
		"[][][][][][][][][]",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    "};
};

template<>
struct lockup<uni1E3C::encoding>
{
	using glyph = uni1E3C;
};

struct uni1E3D
{
	using encoding = type::Encoding<7741>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-1}, type::Y{-4}};
	static constexpr char bitmap[18][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"            ",
		"    [][]    ",
		"  [][][][]  ",
		"[][]    [][]"};
};

template<>
struct lockup<uni1E3D::encoding>
{
	using glyph = uni1E3D;
};

struct uni1E3E
{
	using encoding = type::Encoding<7742>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][29] = {
		"                [][]        ",
		"              [][]          ",
		"            [][]            ",
		"                            ",
		"[][]                    [][]",
		"[][]                    [][]",
		"[][][]                [][][]",
		"[][][]                [][][]",
		"[][][][]            [][][][]",
		"[][][][]            [][][][]",
		"[][]  [][]        [][]  [][]",
		"[][]  [][]        [][]  [][]",
		"[][]    [][]    [][]    [][]",
		"[][]    [][]    [][]    [][]",
		"[][]      []    []      [][]",
		"[][]      [][][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<uni1E3E::encoding>
{
	using glyph = uni1E3E;
};

struct uni1E3F
{
	using encoding = type::Encoding<7743>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][29] = {
		"                [][]        ",
		"              [][]          ",
		"            [][]            ",
		"                            ",
		"[][]  [][][][]    [][][][]  ",
		"[][][][][][][][][][][][][][]",
		"[][][]      [][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<uni1E3F::encoding>
{
	using glyph = uni1E3F;
};

struct uni1E40
{
	using encoding = type::Encoding<7744>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][29] = {
		"            [][]            ",
		"            [][]            ",
		"                            ",
		"[][]                    [][]",
		"[][]                    [][]",
		"[][][]                [][][]",
		"[][][]                [][][]",
		"[][][][]            [][][][]",
		"[][][][]            [][][][]",
		"[][]  [][]        [][]  [][]",
		"[][]  [][]        [][]  [][]",
		"[][]    [][]    [][]    [][]",
		"[][]    [][]    [][]    [][]",
		"[][]      []    []      [][]",
		"[][]      [][][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<uni1E40::encoding>
{
	using glyph = uni1E40;
};

struct uni1E41
{
	using encoding = type::Encoding<7745>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][29] = {
		"            [][]            ",
		"            [][]            ",
		"                            ",
		"[][]  [][][][]    [][][][]  ",
		"[][][][][][][][][][][][][][]",
		"[][][]      [][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<uni1E41::encoding>
{
	using glyph = uni1E41;
};

struct uni1E42
{
	using encoding = type::Encoding<7746>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][29] = {
		"[][]                    [][]",
		"[][]                    [][]",
		"[][][]                [][][]",
		"[][][]                [][][]",
		"[][][][]            [][][][]",
		"[][][][]            [][][][]",
		"[][]  [][]        [][]  [][]",
		"[][]  [][]        [][]  [][]",
		"[][]    [][]    [][]    [][]",
		"[][]    [][]    [][]    [][]",
		"[][]      []    []      [][]",
		"[][]      [][][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"                            ",
		"            [][]            ",
		"            [][]            "};
};

template<>
struct lockup<uni1E42::encoding>
{
	using glyph = uni1E42;
};

struct uni1E43
{
	using encoding = type::Encoding<7747>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][29] = {
		"[][]  [][][][]    [][][][]  ",
		"[][][][][][][][][][][][][][]",
		"[][][]      [][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"                            ",
		"            [][]            ",
		"            [][]            "};
};

template<>
struct lockup<uni1E43::encoding>
{
	using glyph = uni1E43;
};

struct uni1E44
{
	using encoding = type::Encoding<7748>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"        [][]          ",
		"        [][]          ",
		"                      ",
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni1E44::encoding>
{
	using glyph = uni1E44;
};

struct uni1E45
{
	using encoding = type::Encoding<7749>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"      [][]      ",
		"      [][]      ",
		"                ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni1E45::encoding>
{
	using glyph = uni1E45;
};

struct uni1E46
{
	using encoding = type::Encoding<7750>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"          [][]        "};
};

template<>
struct lockup<uni1E46::encoding>
{
	using glyph = uni1E46;
};

struct uni1E47
{
	using encoding = type::Encoding<7751>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][17] = {
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1E47::encoding>
{
	using glyph = uni1E47;
};

struct uni1E48
{
	using encoding = type::Encoding<7752>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]",
		"                      ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni1E48::encoding>
{
	using glyph = uni1E48;
};

struct uni1E49
{
	using encoding = type::Encoding<7753>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[12][17] = {
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"    [][][][][]  "};
};

template<>
struct lockup<uni1E49::encoding>
{
	using glyph = uni1E49;
};

struct uni1E4A
{
	using encoding = type::Encoding<7754>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][]  [][]        [][]",
		"[][]    [][]      [][]",
		"[][]    [][]      [][]",
		"[][]      [][]    [][]",
		"[][]      [][]    [][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"        [][][][]      ",
		"      [][]    [][]    "};
};

template<>
struct lockup<uni1E4A::encoding>
{
	using glyph = uni1E4A;
};

struct uni1E4B
{
	using encoding = type::Encoding<7755>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  "};
};

template<>
struct lockup<uni1E4B::encoding>
{
	using glyph = uni1E4B;
};

struct uni1E4C
{
	using encoding = type::Encoding<7756>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[22][27] = {
		"              [][]        ",
		"            [][]          ",
		"          [][]            ",
		"                          ",
		"          [][]    []      ",
		"        []  [][]  []      ",
		"        []    [][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1E4C::encoding>
{
	using glyph = uni1E4C;
};

struct uni1E4D
{
	using encoding = type::Encoding<7757>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E4D::encoding>
{
	using glyph = uni1E4D;
};

struct uni1E4E
{
	using encoding = type::Encoding<7758>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[21][27] = {
		"        [][]  [][]        ",
		"        [][]  [][]        ",
		"                          ",
		"          [][]    []      ",
		"        []  [][]  []      ",
		"        []    [][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1E4E::encoding>
{
	using glyph = uni1E4E;
};

struct uni1E4F
{
	using encoding = type::Encoding<7759>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][19] = {
		"    [][]  [][]    ",
		"    [][]  [][]    ",
		"                  ",
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E4F::encoding>
{
	using glyph = uni1E4F;
};

struct uni1E50
{
	using encoding = type::Encoding<7760>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[20][27] = {
		"        [][]              ",
		"          [][]            ",
		"            [][]          ",
		"                          ",
		"        [][][][][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1E50::encoding>
{
	using glyph = uni1E50;
};

struct uni1E51
{
	using encoding = type::Encoding<7761>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][19] = {
		"    [][]          ",
		"      [][]        ",
		"        [][]      ",
		"                  ",
		"    [][][][][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E51::encoding>
{
	using glyph = uni1E51;
};

struct uni1E52
{
	using encoding = type::Encoding<7762>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[20][27] = {
		"              [][]        ",
		"            [][]          ",
		"          [][]            ",
		"                          ",
		"        [][][][][]        ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1E52::encoding>
{
	using glyph = uni1E52;
};

struct uni1E53
{
	using encoding = type::Encoding<7763>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[16][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"    [][][][][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1E53::encoding>
{
	using glyph = uni1E53;
};

struct uni1E54
{
	using encoding = type::Encoding<7764>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"          [][]      ",
		"        [][]        ",
		"      [][]          ",
		"                    ",
		"[][][][][][][][]    ",
		"[][][][][][][][][]  ",
		"[][]          [][][]",
		"[][]            [][]",
		"[][]            [][]",
		"[][]          [][][]",
		"[][][][][][][][][]  ",
		"[][][][][][][][]    ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                "};
};

template<>
struct lockup<uni1E54::encoding>
{
	using glyph = uni1E54;
};

struct uni1E55
{
	using encoding = type::Encoding<7765>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<uni1E55::encoding>
{
	using glyph = uni1E55;
};

struct uni1E56
{
	using encoding = type::Encoding<7766>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[17][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][]    ",
		"[][][][][][][][][]  ",
		"[][]          [][][]",
		"[][]            [][]",
		"[][]            [][]",
		"[][]          [][][]",
		"[][][][][][][][][]  ",
		"[][][][][][][][]    ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                "};
};

template<>
struct lockup<uni1E56::encoding>
{
	using glyph = uni1E56;
};

struct uni1E57
{
	using encoding = type::Encoding<7767>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[17][19] = {
		"      [][]        ",
		"      [][]        ",
		"                  ",
		"[][]  [][][][]    ",
		"[][][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][][]      [][]  ",
		"[][][][][][][][]  ",
		"[][]  [][][][]    ",
		"[][]              ",
		"[][]              ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<uni1E57::encoding>
{
	using glyph = uni1E57;
};

struct uni1E58
{
	using encoding = type::Encoding<7768>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"        [][]          ",
		"        [][]          ",
		"                      ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni1E58::encoding>
{
	using glyph = uni1E58;
};

struct uni1E59
{
	using encoding = type::Encoding<7769>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][11] = {
		"  [][]    ",
		"  [][]    ",
		"          ",
		"[][]  [][]",
		"[][]  [][]",
		"[][][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      "};
};

template<>
struct lockup<uni1E59::encoding>
{
	using glyph = uni1E59;
};

struct uni1E5A
{
	using encoding = type::Encoding<7770>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][23] = {
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"          [][]        "};
};

template<>
struct lockup<uni1E5A::encoding>
{
	using glyph = uni1E5A;
};

struct uni1E5B
{
	using encoding = type::Encoding<7771>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"[][][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"          ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<uni1E5B::encoding>
{
	using glyph = uni1E5B;
};

struct uni1E5C
{
	using encoding = type::Encoding<7772>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[19][23] = {
		"      [][][][][]      ",
		"                      ",
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"                      ",
		"          [][]        ",
		"          [][]        "};
};

template<>
struct lockup<uni1E5C::encoding>
{
	using glyph = uni1E5C;
};

struct uni1E5D
{
	using encoding = type::Encoding<7773>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[15][11] = {
		"[][][][][]",
		"          ",
		"[][]  [][]",
		"[][]  [][]",
		"[][][]    ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"[][]      ",
		"          ",
		"  [][]    ",
		"  [][]    "};
};

template<>
struct lockup<uni1E5D::encoding>
{
	using glyph = uni1E5D;
};

struct uni1E5E
{
	using encoding = type::Encoding<7774>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][23] = {
		"[][][][][][][][][]    ",
		"[][][][][][][][][][]  ",
		"[][]            [][][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]            [][][]",
		"[][][][][][][][][][]  ",
		"[][][][][][][][][]    ",
		"[][]            [][]  ",
		"[][]            [][]  ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"                      ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni1E5E::encoding>
{
	using glyph = uni1E5E;
};

struct uni1E5F
{
	using encoding = type::Encoding<7775>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-2}};
	static constexpr char bitmap[12][13] = {
		"  [][]  [][]",
		"  [][]  [][]",
		"  [][][]    ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"  [][]      ",
		"            ",
		"[][][][][]  "};
};

template<>
struct lockup<uni1E5F::encoding>
{
	using glyph = uni1E5F;
};

struct uni1E60
{
	using encoding = type::Encoding<7776>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    "};
};

template<>
struct lockup<uni1E60::encoding>
{
	using glyph = uni1E60;
};

struct uni1E61
{
	using encoding = type::Encoding<7777>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][15] = {
		"      [][]    ",
		"      [][]    ",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<uni1E61::encoding>
{
	using glyph = uni1E61;
};

struct uni1E62
{
	using encoding = type::Encoding<7778>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][21] = {
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    ",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1E62::encoding>
{
	using glyph = uni1E62;
};

struct uni1E63
{
	using encoding = type::Encoding<7779>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][15] = {
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    ",
		"              ",
		"    [][]      ",
		"    [][]      "};
};

template<>
struct lockup<uni1E63::encoding>
{
	using glyph = uni1E63;
};

struct uni1E64
{
	using encoding = type::Encoding<7780>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[21][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    "};
};

template<>
struct lockup<uni1E64::encoding>
{
	using glyph = uni1E64;
};

struct uni1E65
{
	using encoding = type::Encoding<7781>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][15] = {
		"      [][]    ",
		"      [][]    ",
		"              ",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<uni1E65::encoding>
{
	using glyph = uni1E65;
};

struct uni1E66
{
	using encoding = type::Encoding<7782>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"        [][]          ",
		"        [][]          ",
		"                      ",
		"    [][]    [][]      ",
		"      [][][][]        ",
		"        [][]          ",
		"                      ",
		"      [][][][][]      ",
		"  [][][][][][][][][]  ",
		"[][][]          [][][]",
		"[][][]                ",
		"  [][][][][][][][][]  ",
		"    [][][][][][][][][]",
		"                [][][]",
		"[][][]          [][][]",
		"  [][][][][][][][][]  ",
		"    [][][][][][]      "};
};

template<>
struct lockup<uni1E66::encoding>
{
	using glyph = uni1E66;
};

struct uni1E67
{
	using encoding = type::Encoding<7783>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][15] = {
		"    [][]      ",
		"    [][]      ",
		"              ",
		"[][]    [][]  ",
		"  [][][][]    ",
		"    [][]      ",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    "};
};

template<>
struct lockup<uni1E67::encoding>
{
	using glyph = uni1E67;
};

struct uni1E68
{
	using encoding = type::Encoding<7784>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{20}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[20][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"      [][][][]      ",
		"  [][][][][][][][]  ",
		"[][][]        [][][]",
		"[][]            [][]",
		"[][][]              ",
		"  [][][][][]        ",
		"      [][][][][]    ",
		"            [][][]  ",
		"              [][][]",
		"                [][]",
		"[][]            [][]",
		"[][][]        [][][]",
		"  [][][][][][][][]  ",
		"    [][][][][][]    ",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1E68::encoding>
{
	using glyph = uni1E68;
};

struct uni1E69
{
	using encoding = type::Encoding<7785>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[16][15] = {
		"      [][]    ",
		"      [][]    ",
		"              ",
		"    [][][][]  ",
		"  [][][][][][]",
		"[][]      [][]",
		"[][]          ",
		"[][][][][][]  ",
		"    [][][][][]",
		"          [][]",
		"[][]      [][]",
		"[][][][][][]  ",
		"  [][][][]    ",
		"              ",
		"    [][]      ",
		"    [][]      "};
};

template<>
struct lockup<uni1E69::encoding>
{
	using glyph = uni1E69;
};

struct uni1E6A
{
	using encoding = type::Encoding<7786>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][21] = {
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1E6A::encoding>
{
	using glyph = uni1E6A;
};

struct uni1E6B
{
	using encoding = type::Encoding<7787>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[16][13] = {
		"    [][]    ",
		"    [][]    ",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]"};
};

template<>
struct lockup<uni1E6B::encoding>
{
	using glyph = uni1E6B;
};

struct uni1E6C
{
	using encoding = type::Encoding<7788>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1E6C::encoding>
{
	using glyph = uni1E6C;
};

struct uni1E6D
{
	using encoding = type::Encoding<7789>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[16][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]",
		"            ",
		"      [][]  ",
		"      [][]  "};
};

template<>
struct lockup<uni1E6D::encoding>
{
	using glyph = uni1E6D;
};

struct uni1E6E
{
	using encoding = type::Encoding<7790>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"      [][][][][]    "};
};

template<>
struct lockup<uni1E6E::encoding>
{
	using glyph = uni1E6E;
};

struct uni1E6F
{
	using encoding = type::Encoding<7791>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-2}};
	static constexpr char bitmap[15][13] = {
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]",
		"            ",
		"  [][][][][]"};
};

template<>
struct lockup<uni1E6F::encoding>
{
	using glyph = uni1E6F;
};

struct uni1E70
{
	using encoding = type::Encoding<7792>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"        [][]        ",
		"                    ",
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    "};
};

template<>
struct lockup<uni1E70::encoding>
{
	using glyph = uni1E70;
};

struct uni1E71
{
	using encoding = type::Encoding<7793>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[17][15] = {
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"[][][][][][]  ",
		"[][][][][][]  ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][]      ",
		"    [][][][]  ",
		"      [][][]  ",
		"              ",
		"      [][]    ",
		"    [][][][]  ",
		"  [][]    [][]"};
};

template<>
struct lockup<uni1E71::encoding>
{
	using glyph = uni1E71;
};

struct uni1E72
{
	using encoding = type::Encoding<7794>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      ",
		"                      ",
		"      [][]  [][]      ",
		"      [][]  [][]      "};
};

template<>
struct lockup<uni1E72::encoding>
{
	using glyph = uni1E72;
};

struct uni1E73
{
	using encoding = type::Encoding<7795>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]",
		"                ",
		"    [][]  [][]  ",
		"    [][]  [][]  "};
};

template<>
struct lockup<uni1E73::encoding>
{
	using glyph = uni1E73;
};

struct uni1E74
{
	using encoding = type::Encoding<7796>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      ",
		"                      ",
		"      [][]    []      ",
		"    []  [][]  []      ",
		"    []    [][]        "};
};

template<>
struct lockup<uni1E74::encoding>
{
	using glyph = uni1E74;
};

struct uni1E75
{
	using encoding = type::Encoding<7797>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]",
		"                ",
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    "};
};

template<>
struct lockup<uni1E75::encoding>
{
	using glyph = uni1E75;
};

struct uni1E76
{
	using encoding = type::Encoding<7798>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      ",
		"                      ",
		"          [][]        ",
		"        [][][][]      ",
		"      [][]    [][]    "};
};

template<>
struct lockup<uni1E76::encoding>
{
	using glyph = uni1E76;
};

struct uni1E77
{
	using encoding = type::Encoding<7799>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]",
		"                ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  "};
};

template<>
struct lockup<uni1E77::encoding>
{
	using glyph = uni1E77;
};

struct uni1E78
{
	using encoding = type::Encoding<7800>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[22][23] = {
		"            [][]      ",
		"          [][]        ",
		"        [][]          ",
		"                      ",
		"        [][]    []    ",
		"      []  [][]  []    ",
		"      []    [][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni1E78::encoding>
{
	using glyph = uni1E78;
};

struct uni1E79
{
	using encoding = type::Encoding<7801>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni1E79::encoding>
{
	using glyph = uni1E79;
};

struct uni1E7A
{
	using encoding = type::Encoding<7802>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[19][23] = {
		"      [][]  [][]      ",
		"      [][]  [][]      ",
		"                      ",
		"      [][][][][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      "};
};

template<>
struct lockup<uni1E7A::encoding>
{
	using glyph = uni1E7A;
};

struct uni1E7B
{
	using encoding = type::Encoding<7803>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[15][17] = {
		"    [][]  [][]  ",
		"    [][]  [][]  ",
		"                ",
		"    [][][][][]  ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]"};
};

template<>
struct lockup<uni1E7B::encoding>
{
	using glyph = uni1E7B;
};

struct uni1E7C
{
	using encoding = type::Encoding<7804>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"        [][]    []      ",
		"      []  [][]  []      ",
		"      []    [][]        ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"        [][][][]        ",
		"          [][]          "};
};

template<>
struct lockup<uni1E7C::encoding>
{
	using glyph = uni1E7C;
};

struct uni1E7D
{
	using encoding = type::Encoding<7805>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1E7D::encoding>
{
	using glyph = uni1E7D;
};

struct uni1E7E
{
	using encoding = type::Encoding<7806>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[17][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"        [][][][]        ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1E7E::encoding>
{
	using glyph = uni1E7E;
};

struct uni1E7F
{
	using encoding = type::Encoding<7807>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1E7F::encoding>
{
	using glyph = uni1E7F;
};

struct Wgrave
{
	using encoding = type::Encoding<7808>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][33] = {
		"          [][]                  ",
		"            [][]                ",
		"              [][]              ",
		"                                ",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<Wgrave::encoding>
{
	using glyph = Wgrave;
};

struct wgrave
{
	using encoding = type::Encoding<7809>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"      [][]              ",
		"        [][]            ",
		"          [][]          ",
		"                        ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<wgrave::encoding>
{
	using glyph = wgrave;
};

struct Wacute
{
	using encoding = type::Encoding<7810>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][33] = {
		"                  [][]          ",
		"                [][]            ",
		"              [][]              ",
		"                                ",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<Wacute::encoding>
{
	using glyph = Wacute;
};

struct wacute
{
	using encoding = type::Encoding<7811>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<wacute::encoding>
{
	using glyph = wacute;
};

struct Wdieresis
{
	using encoding = type::Encoding<7812>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][33] = {
		"            [][]  [][]          ",
		"            [][]  [][]          ",
		"                                ",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<Wdieresis::encoding>
{
	using glyph = Wdieresis;
};

struct wdieresis
{
	using encoding = type::Encoding<7813>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][25] = {
		"        [][]  [][]      ",
		"        [][]  [][]      ",
		"                        ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<wdieresis::encoding>
{
	using glyph = wdieresis;
};

struct uni1E86
{
	using encoding = type::Encoding<7814>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][33] = {
		"              [][]              ",
		"              [][]              ",
		"                                ",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<uni1E86::encoding>
{
	using glyph = uni1E86;
};

struct uni1E87
{
	using encoding = type::Encoding<7815>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][25] = {
		"          [][]          ",
		"          [][]          ",
		"                        ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<uni1E87::encoding>
{
	using glyph = uni1E87;
};

struct uni1E88
{
	using encoding = type::Encoding<7816>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][33] = {
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]      [][][][]      [][]  ",
		"  [][]      []    []      [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      ",
		"                                ",
		"              [][]              ",
		"              [][]              "};
};

template<>
struct lockup<uni1E88::encoding>
{
	using glyph = uni1E88;
};

struct uni1E89
{
	using encoding = type::Encoding<7817>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][25] = {
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1E89::encoding>
{
	using glyph = uni1E89;
};

struct uni1E8A
{
	using encoding = type::Encoding<7818>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"          [][]        ",
		"          [][]        ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][]      [][][]  ",
		"    [][]      [][]    ",
		"      [][]  [][]      ",
		"        [][][]        ",
		"        [][][]        ",
		"      [][]  [][]      ",
		"    [][]      [][]    ",
		"  [][][]      [][][]  ",
		"  [][]          [][]  ",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni1E8A::encoding>
{
	using glyph = uni1E8A;
};

struct uni1E8B
{
	using encoding = type::Encoding<7819>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"      [][]      ",
		"      [][]      ",
		"                ",
		"[][]        [][]",
		"[][][]    [][][]",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"[][][]    [][][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni1E8B::encoding>
{
	using glyph = uni1E8B;
};

struct uni1E8C
{
	using encoding = type::Encoding<7820>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[17][23] = {
		"      [][]  [][]      ",
		"      [][]  [][]      ",
		"                      ",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][]      [][][]  ",
		"    [][]      [][]    ",
		"      [][]  [][]      ",
		"        [][][]        ",
		"        [][][]        ",
		"      [][]  [][]      ",
		"    [][]      [][]    ",
		"  [][][]      [][][]  ",
		"  [][]          [][]  ",
		"[][]              [][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni1E8C::encoding>
{
	using glyph = uni1E8C;
};

struct uni1E8D
{
	using encoding = type::Encoding<7821>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][17] = {
		"    [][]  [][]  ",
		"    [][]  [][]  ",
		"                ",
		"[][]        [][]",
		"[][][]    [][][]",
		"  [][]    [][]  ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"[][][]    [][][]",
		"[][]        [][]"};
};

template<>
struct lockup<uni1E8D::encoding>
{
	using glyph = uni1E8D;
};

struct uni1E8E
{
	using encoding = type::Encoding<7822>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"          [][]          ",
		"          [][]          ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1E8E::encoding>
{
	using glyph = uni1E8E;
};

struct uni1E8F
{
	using encoding = type::Encoding<7823>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[17][17] = {
		"      [][]      ",
		"      [][]      ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<uni1E8F::encoding>
{
	using glyph = uni1E8F;
};

struct uni1E90
{
	using encoding = type::Encoding<7824>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"      [][][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1E90::encoding>
{
	using glyph = uni1E90;
};

struct uni1E91
{
	using encoding = type::Encoding<7825>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][15] = {
		"      [][]    ",
		"    [][][][]  ",
		"  [][]    [][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<uni1E91::encoding>
{
	using glyph = uni1E91;
};

struct uni1E92
{
	using encoding = type::Encoding<7826>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"      [][][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1E92::encoding>
{
	using glyph = uni1E92;
};

struct uni1E93
{
	using encoding = type::Encoding<7827>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][15] = {
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"    [][]      ",
		"    [][]      "};
};

template<>
struct lockup<uni1E93::encoding>
{
	using glyph = uni1E93;
};

struct uni1E94
{
	using encoding = type::Encoding<7828>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"              [][]  ",
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"      [][][]        ",
		"      [][]          ",
		"    [][]            ",
		"  [][]              ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                    ",
		"    [][][][][]      "};
};

template<>
struct lockup<uni1E94::encoding>
{
	using glyph = uni1E94;
};

struct uni1E95
{
	using encoding = type::Encoding<7829>;
	static constexpr auto next = type::Width{9};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[12][15] = {
		"[][][][][][][]",
		"[][][][][][][]",
		"          [][]",
		"        [][]  ",
		"      [][]    ",
		"    [][]      ",
		"  [][]        ",
		"[][]          ",
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"  [][][][][]  "};
};

template<>
struct lockup<uni1E95::encoding>
{
	using glyph = uni1E95;
};

struct uni1E96
{
	using encoding = type::Encoding<7830>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[16][17] = {
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]            ",
		"[][]  [][][][]  ",
		"[][][][][][][][]",
		"[][][]      [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"                ",
		"    [][][][][]  "};
};

template<>
struct lockup<uni1E96::encoding>
{
	using glyph = uni1E96;
};

struct uni1E97
{
	using encoding = type::Encoding<7831>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{6}, type::Height{16}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[16][13] = {
		"  [][]  [][]",
		"  [][]  [][]",
		"            ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"[][][][][][]",
		"[][][][][][]",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][]    ",
		"    [][][][]",
		"      [][][]"};
};

template<>
struct lockup<uni1E97::encoding>
{
	using glyph = uni1E97;
};

struct uni1E98
{
	using encoding = type::Encoding<7832>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{15}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[15][25] = {
		"          [][][]        ",
		"        [][]  [][]      ",
		"        [][]  [][]      ",
		"          [][][]        ",
		"                        ",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"[][]      [][]      [][]",
		"  [][]    [][]    [][]  ",
		"  [][]    [][]    [][]  ",
		"  [][]  []    []  [][]  ",
		"    []  []    []  []    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      "};
};

template<>
struct lockup<uni1E98::encoding>
{
	using glyph = uni1E98;
};

struct uni1E99
{
	using encoding = type::Encoding<7833>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{19}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[19][17] = {
		"      [][][]    ",
		"    [][]  [][]  ",
		"    [][]  [][]  ",
		"      [][][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<uni1E99::encoding>
{
	using glyph = uni1E99;
};

struct uni1EA0
{
	using encoding = type::Encoding<7840>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[17][25] = {
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1EA0::encoding>
{
	using glyph = uni1EA0;
};

struct uni1EA1
{
	using encoding = type::Encoding<7841>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][19] = {
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]",
		"                  ",
		"        [][]      ",
		"        [][]      "};
};

template<>
struct lockup<uni1EA1::encoding>
{
	using glyph = uni1EA1;
};

struct uni1EA4
{
	using encoding = type::Encoding<7844>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[22][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni1EA4::encoding>
{
	using glyph = uni1EA4;
};

struct uni1EA5
{
	using encoding = type::Encoding<7845>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni1EA5::encoding>
{
	using glyph = uni1EA5;
};

struct uni1EA6
{
	using encoding = type::Encoding<7846>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[22][25] = {
		"      [][]              ",
		"        [][]            ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni1EA6::encoding>
{
	using glyph = uni1EA6;
};

struct uni1EA7
{
	using encoding = type::Encoding<7847>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]          ",
		"      [][]        ",
		"        [][]      ",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni1EA7::encoding>
{
	using glyph = uni1EA7;
};

struct uni1EAA
{
	using encoding = type::Encoding<7850>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[22][25] = {
		"        [][]    []      ",
		"      []  [][]  []      ",
		"      []    [][]        ",
		"                        ",
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni1EAA::encoding>
{
	using glyph = uni1EAA;
};

struct uni1EAB
{
	using encoding = type::Encoding<7851>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni1EAB::encoding>
{
	using glyph = uni1EAB;
};

struct uni1EAC
{
	using encoding = type::Encoding<7852>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[21][25] = {
		"          [][]          ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1EAC::encoding>
{
	using glyph = uni1EAC;
};

struct uni1EAD
{
	using encoding = type::Encoding<7853>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][19] = {
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]",
		"                  ",
		"        [][]      ",
		"        [][]      "};
};

template<>
struct lockup<uni1EAD::encoding>
{
	using glyph = uni1EAD;
};

struct uni1EAE
{
	using encoding = type::Encoding<7854>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[22][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"      []        []      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni1EAE::encoding>
{
	using glyph = uni1EAE;
};

struct uni1EAF
{
	using encoding = type::Encoding<7855>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"  []        []    ",
		"  [][]    [][]    ",
		"    [][][][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni1EAF::encoding>
{
	using glyph = uni1EAF;
};

struct uni1EB0
{
	using encoding = type::Encoding<7856>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[22][25] = {
		"      [][]              ",
		"        [][]            ",
		"          [][]          ",
		"                        ",
		"      []        []      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni1EB0::encoding>
{
	using glyph = uni1EB0;
};

struct uni1EB1
{
	using encoding = type::Encoding<7857>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]          ",
		"      [][]        ",
		"        [][]      ",
		"                  ",
		"  []        []    ",
		"  [][]    [][]    ",
		"    [][][][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni1EB1::encoding>
{
	using glyph = uni1EB1;
};

struct uni1EB4
{
	using encoding = type::Encoding<7860>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[22][25] = {
		"        [][]    []      ",
		"      []  [][]  []      ",
		"      []    [][]        ",
		"                        ",
		"      []        []      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni1EB4::encoding>
{
	using glyph = uni1EB4;
};

struct uni1EB5
{
	using encoding = type::Encoding<7861>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"  []        []    ",
		"  [][]    [][]    ",
		"    [][][][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]"};
};

template<>
struct lockup<uni1EB5::encoding>
{
	using glyph = uni1EB5;
};

struct uni1EB6
{
	using encoding = type::Encoding<7862>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[21][25] = {
		"      []        []      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1EB6::encoding>
{
	using glyph = uni1EB6;
};

struct uni1EB7
{
	using encoding = type::Encoding<7863>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][19] = {
		"  []        []    ",
		"  [][]    [][]    ",
		"    [][][][]      ",
		"                  ",
		"  [][][][][][]    ",
		"[][][]    [][][]  ",
		"[][]        [][]  ",
		"          [][][]  ",
		"  [][][][][][][]  ",
		"[][][]      [][]  ",
		"[][]        [][]  ",
		"[][]        [][]  ",
		"[][][]    [][][][]",
		"  [][][][]    [][]",
		"                  ",
		"        [][]      ",
		"        [][]      "};
};

template<>
struct lockup<uni1EB7::encoding>
{
	using glyph = uni1EB7;
};

struct uni1EB8
{
	using encoding = type::Encoding<7864>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-3}};
	static constexpr char bitmap[17][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1EB8::encoding>
{
	using glyph = uni1EB8;
};

struct uni1EB9
{
	using encoding = type::Encoding<7865>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][17] = {
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1EB9::encoding>
{
	using glyph = uni1EB9;
};

struct uni1EBC
{
	using encoding = type::Encoding<7868>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[18][21] = {
		"      [][]    []    ",
		"    []  [][]  []    ",
		"    []    [][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1EBC::encoding>
{
	using glyph = uni1EBC;
};

struct uni1EBD
{
	using encoding = type::Encoding<7869>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][17] = {
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni1EBD::encoding>
{
	using glyph = uni1EBD;
};

struct uni1EBE
{
	using encoding = type::Encoding<7870>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[22][21] = {
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1EBE::encoding>
{
	using glyph = uni1EBE;
};

struct uni1EBF
{
	using encoding = type::Encoding<7871>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"          [][]  ",
		"        [][]    ",
		"      [][]      ",
		"                ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni1EBF::encoding>
{
	using glyph = uni1EBF;
};

struct uni1EC0
{
	using encoding = type::Encoding<7872>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[22][21] = {
		"    [][]            ",
		"      [][]          ",
		"        [][]        ",
		"                    ",
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1EC0::encoding>
{
	using glyph = uni1EC0;
};

struct uni1EC1
{
	using encoding = type::Encoding<7873>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"  [][]          ",
		"    [][]        ",
		"      [][]      ",
		"                ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni1EC1::encoding>
{
	using glyph = uni1EC1;
};

struct uni1EC4
{
	using encoding = type::Encoding<7876>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[22][21] = {
		"      [][]    []    ",
		"    []  [][]  []    ",
		"    []    [][]      ",
		"                    ",
		"        [][]        ",
		"      [][][][]      ",
		"    [][]    [][]    ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni1EC4::encoding>
{
	using glyph = uni1EC4;
};

struct uni1EC5
{
	using encoding = type::Encoding<7877>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][17] = {
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    "};
};

template<>
struct lockup<uni1EC5::encoding>
{
	using glyph = uni1EC5;
};

struct uni1EC6
{
	using encoding = type::Encoding<7878>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-3}};
	static constexpr char bitmap[21][21] = {
		"      [][]          ",
		"    [][][][]        ",
		"  [][]    [][]      ",
		"                    ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][]  ",
		"[][][][][][][][][]  ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][]                ",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1EC6::encoding>
{
	using glyph = uni1EC6;
};

struct uni1EC7
{
	using encoding = type::Encoding<7879>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][17] = {
		"      [][]      ",
		"    [][][][]    ",
		"  [][]    [][]  ",
		"                ",
		"    [][][][]    ",
		"  [][][][][][]  ",
		"[][]        [][]",
		"[][]        [][]",
		"[][][][][][][][]",
		"[][]            ",
		"[][]            ",
		"[][][]      [][]",
		"  [][][][][][][]",
		"    [][][][]    ",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1EC7::encoding>
{
	using glyph = uni1EC7;
};

struct uni1ECA
{
	using encoding = type::Encoding<7882>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-3}};
	static constexpr char bitmap[17][5] = {
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni1ECA::encoding>
{
	using glyph = uni1ECA;
};

struct uni1ECB
{
	using encoding = type::Encoding<7883>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"[][]",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni1ECB::encoding>
{
	using glyph = uni1ECB;
};

struct uni1ECC
{
	using encoding = type::Encoding<7884>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][27] = {
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        ",
		"                          ",
		"            [][]          ",
		"            [][]          "};
};

template<>
struct lockup<uni1ECC::encoding>
{
	using glyph = uni1ECC;
};

struct uni1ECD
{
	using encoding = type::Encoding<7885>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][19] = {
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    ",
		"                  ",
		"        [][]      ",
		"        [][]      "};
};

template<>
struct lockup<uni1ECD::encoding>
{
	using glyph = uni1ECD;
};

struct uni1ED0
{
	using encoding = type::Encoding<7888>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[22][27] = {
		"              [][]        ",
		"            [][]          ",
		"          [][]            ",
		"                          ",
		"            [][]          ",
		"          [][][][]        ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1ED0::encoding>
{
	using glyph = uni1ED0;
};

struct uni1ED1
{
	using encoding = type::Encoding<7889>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"          [][]    ",
		"        [][]      ",
		"      [][]        ",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1ED1::encoding>
{
	using glyph = uni1ED1;
};

struct uni1ED2
{
	using encoding = type::Encoding<7890>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[22][27] = {
		"        [][]              ",
		"          [][]            ",
		"            [][]          ",
		"                          ",
		"            [][]          ",
		"          [][][][]        ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1ED2::encoding>
{
	using glyph = uni1ED2;
};

struct uni1ED3
{
	using encoding = type::Encoding<7891>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]          ",
		"      [][]        ",
		"        [][]      ",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1ED3::encoding>
{
	using glyph = uni1ED3;
};

struct uni1ED6
{
	using encoding = type::Encoding<7894>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{22}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[22][27] = {
		"          [][]    []      ",
		"        []  [][]  []      ",
		"        []    [][]        ",
		"                          ",
		"            [][]          ",
		"          [][][][]        ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        "};
};

template<>
struct lockup<uni1ED6::encoding>
{
	using glyph = uni1ED6;
};

struct uni1ED7
{
	using encoding = type::Encoding<7895>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][19] = {
		"    [][]    []    ",
		"  []  [][]  []    ",
		"  []    [][]      ",
		"                  ",
		"      [][]        ",
		"    [][][][]      ",
		"  [][]    [][]    ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    "};
};

template<>
struct lockup<uni1ED7::encoding>
{
	using glyph = uni1ED7;
};

struct uni1ED8
{
	using encoding = type::Encoding<7896>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{21}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[21][27] = {
		"            [][]          ",
		"          [][][][]        ",
		"        [][]    [][]      ",
		"                          ",
		"        [][][][][]        ",
		"    [][][][][][][][][]    ",
		"  [][][]          [][][]  ",
		"  [][]              [][]  ",
		"[][][]              [][][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][]                  [][]",
		"[][][]              [][][]",
		"  [][]              [][]  ",
		"  [][][]          [][][]  ",
		"    [][][][][][][][][]    ",
		"        [][][][][]        ",
		"                          ",
		"            [][]          ",
		"            [][]          "};
};

template<>
struct lockup<uni1ED8::encoding>
{
	using glyph = uni1ED8;
};

struct uni1ED9
{
	using encoding = type::Encoding<7897>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][19] = {
		"        [][]      ",
		"      [][][][]    ",
		"    [][]    [][]  ",
		"                  ",
		"    [][][][][]    ",
		"  [][][][][][][]  ",
		"  [][]      [][]  ",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"[][]          [][]",
		"  [][]      [][]  ",
		"  [][][][][][][]  ",
		"    [][][][][]    ",
		"                  ",
		"        [][]      ",
		"        [][]      "};
};

template<>
struct lockup<uni1ED9::encoding>
{
	using glyph = uni1ED9;
};

struct uni1EDA
{
	using encoding = type::Encoding<7898>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][29] = {
		"                [][]        ",
		"              [][]          ",
		"            [][]            ",
		"                            ",
		"        [][][][][]      [][]",
		"    [][][][][][][][][]  [][]",
		"  [][][]          [][][]  []",
		"  [][]              [][]  []",
		"[][][]              [][][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][][]              [][][]  ",
		"  [][]              [][]    ",
		"  [][][]          [][][]    ",
		"    [][][][][][][][][]      ",
		"        [][][][][]          "};
};

template<>
struct lockup<uni1EDA::encoding>
{
	using glyph = uni1EDA;
};

struct uni1EDB
{
	using encoding = type::Encoding<7899>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"    [][][][][]  [][]",
		"  [][][][][][][][][]",
		"  [][]      [][]  []",
		"[][]          [][][]",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"  [][]      [][]    ",
		"  [][][][][][][]    ",
		"    [][][][][]      "};
};

template<>
struct lockup<uni1EDB::encoding>
{
	using glyph = uni1EDB;
};

struct uni1EDC
{
	using encoding = type::Encoding<7900>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][29] = {
		"          [][]              ",
		"            [][]            ",
		"              [][]          ",
		"                            ",
		"        [][][][][]      [][]",
		"    [][][][][][][][][]  [][]",
		"  [][][]          [][][]  []",
		"  [][]              [][]  []",
		"[][][]              [][][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][][]              [][][]  ",
		"  [][]              [][]    ",
		"  [][][]          [][][]    ",
		"    [][][][][][][][][]      ",
		"        [][][][][]          "};
};

template<>
struct lockup<uni1EDC::encoding>
{
	using glyph = uni1EDC;
};

struct uni1EDD
{
	using encoding = type::Encoding<7901>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"      [][]          ",
		"        [][]        ",
		"          [][]      ",
		"                    ",
		"    [][][][][]  [][]",
		"  [][][][][][][][][]",
		"  [][]      [][]  []",
		"[][]          [][][]",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"  [][]      [][]    ",
		"  [][][][][][][]    ",
		"    [][][][][]      "};
};

template<>
struct lockup<uni1EDD::encoding>
{
	using glyph = uni1EDD;
};

struct uni1EE0
{
	using encoding = type::Encoding<7904>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][29] = {
		"            [][]    []      ",
		"          []  [][]  []      ",
		"          []    [][]        ",
		"                            ",
		"        [][][][][]      [][]",
		"    [][][][][][][][][]  [][]",
		"  [][][]          [][][]  []",
		"  [][]              [][]  []",
		"[][][]              [][][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][][]              [][][]  ",
		"  [][]              [][]    ",
		"  [][][]          [][][]    ",
		"    [][][][][][][][][]      ",
		"        [][][][][]          "};
};

template<>
struct lockup<uni1EE0::encoding>
{
	using glyph = uni1EE0;
};

struct uni1EE1
{
	using encoding = type::Encoding<7905>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"        [][]    []  ",
		"      []  [][]  []  ",
		"      []    [][]    ",
		"                    ",
		"    [][][][][]  [][]",
		"  [][][][][][][][][]",
		"  [][]      [][]  []",
		"[][]          [][][]",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"  [][]      [][]    ",
		"  [][][][][][][]    ",
		"    [][][][][]      "};
};

template<>
struct lockup<uni1EE1::encoding>
{
	using glyph = uni1EE1;
};

struct uni1EE2
{
	using encoding = type::Encoding<7906>;
	static constexpr auto next = type::Width{15};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][29] = {
		"        [][][][][]      [][]",
		"    [][][][][][][][][]  [][]",
		"  [][][]          [][][]  []",
		"  [][]              [][]  []",
		"[][][]              [][][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][]                  [][]  ",
		"[][][]              [][][]  ",
		"  [][]              [][]    ",
		"  [][][]          [][][]    ",
		"    [][][][][][][][][]      ",
		"        [][][][][]          ",
		"                            ",
		"            [][]            ",
		"            [][]            "};
};

template<>
struct lockup<uni1EE2::encoding>
{
	using glyph = uni1EE2;
};

struct uni1EE3
{
	using encoding = type::Encoding<7907>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][21] = {
		"    [][][][][]  [][]",
		"  [][][][][][][][][]",
		"  [][]      [][]  []",
		"[][]          [][][]",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"[][]          [][]  ",
		"  [][]      [][]    ",
		"  [][][][][][][]    ",
		"    [][][][][]      ",
		"                    ",
		"        [][]        ",
		"        [][]        "};
};

template<>
struct lockup<uni1EE3::encoding>
{
	using glyph = uni1EE3;
};

struct uni1EE4
{
	using encoding = type::Encoding<7908>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][23] = {
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"[][]              [][]",
		"  [][]          [][]  ",
		"  [][][][][][][][][]  ",
		"      [][][][][]      ",
		"                      ",
		"          [][]        ",
		"          [][]        "};
};

template<>
struct lockup<uni1EE4::encoding>
{
	using glyph = uni1EE4;
};

struct uni1EE5
{
	using encoding = type::Encoding<7909>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"[][]      [][][]",
		"[][][][][][][][]",
		"  [][][][]  [][]",
		"                ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<uni1EE5::encoding>
{
	using glyph = uni1EE5;
};

struct uni1EE8
{
	using encoding = type::Encoding<7912>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"              [][]      ",
		"            [][]        ",
		"          [][]          ",
		"                        ",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"  [][]          [][]    ",
		"  [][][][][][][][][]    ",
		"      [][][][][]        "};
};

template<>
struct lockup<uni1EE8::encoding>
{
	using glyph = uni1EE8;
};

struct uni1EE9
{
	using encoding = type::Encoding<7913>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"            [][]    ",
		"          [][]      ",
		"        [][]        ",
		"                    ",
		"[][]        [][][][]",
		"[][]        [][][][]",
		"[][]        [][]  []",
		"[][]        [][]  []",
		"[][]        [][][]  ",
		"[][]        [][]    ",
		"[][]        [][]    ",
		"[][]      [][][]    ",
		"[][][][][][][][]    ",
		"  [][][][]  [][]    "};
};

template<>
struct lockup<uni1EE9::encoding>
{
	using glyph = uni1EE9;
};

struct uni1EEA
{
	using encoding = type::Encoding<7914>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"        [][]            ",
		"          [][]          ",
		"            [][]        ",
		"                        ",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"  [][]          [][]    ",
		"  [][][][][][][][][]    ",
		"      [][][][][]        "};
};

template<>
struct lockup<uni1EEA::encoding>
{
	using glyph = uni1EEA;
};

struct uni1EEB
{
	using encoding = type::Encoding<7915>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"      [][]          ",
		"        [][]        ",
		"          [][]      ",
		"                    ",
		"[][]        [][][][]",
		"[][]        [][][][]",
		"[][]        [][]  []",
		"[][]        [][]  []",
		"[][]        [][][]  ",
		"[][]        [][]    ",
		"[][]        [][]    ",
		"[][]      [][][]    ",
		"[][][][][][][][]    ",
		"  [][][][]  [][]    "};
};

template<>
struct lockup<uni1EEB::encoding>
{
	using glyph = uni1EEB;
};

struct uni1EEE
{
	using encoding = type::Encoding<7918>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"          [][]    []    ",
		"        []  [][]  []    ",
		"        []    [][]      ",
		"                        ",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"  [][]          [][]    ",
		"  [][][][][][][][][]    ",
		"      [][][][][]        "};
};

template<>
struct lockup<uni1EEE::encoding>
{
	using glyph = uni1EEE;
};

struct uni1EEF
{
	using encoding = type::Encoding<7919>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"      [][]    []    ",
		"    []  [][]  []    ",
		"    []    [][]      ",
		"                    ",
		"[][]        [][][][]",
		"[][]        [][][][]",
		"[][]        [][]  []",
		"[][]        [][]  []",
		"[][]        [][][]  ",
		"[][]        [][]    ",
		"[][]        [][]    ",
		"[][]      [][][]    ",
		"[][][][][][][][]    ",
		"  [][][][]  [][]    "};
};

template<>
struct lockup<uni1EEF::encoding>
{
	using glyph = uni1EEF;
};

struct uni1EF0
{
	using encoding = type::Encoding<7920>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[17][25] = {
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][][]",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"[][]              [][]  ",
		"  [][]          [][]    ",
		"  [][][][][][][][][]    ",
		"      [][][][][]        ",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1EF0::encoding>
{
	using glyph = uni1EF0;
};

struct uni1EF1
{
	using encoding = type::Encoding<7921>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[13][21] = {
		"[][]        [][][][]",
		"[][]        [][][][]",
		"[][]        [][]  []",
		"[][]        [][]  []",
		"[][]        [][][]  ",
		"[][]        [][]    ",
		"[][]        [][]    ",
		"[][]      [][][]    ",
		"[][][][][][][][]    ",
		"  [][][][]  [][]    ",
		"                    ",
		"      [][]          ",
		"      [][]          "};
};

template<>
struct lockup<uni1EF1::encoding>
{
	using glyph = uni1EF1;
};

struct Ygrave
{
	using encoding = type::Encoding<7922>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"      [][]              ",
		"        [][]            ",
		"          [][]          ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<Ygrave::encoding>
{
	using glyph = Ygrave;
};

struct ygrave
{
	using encoding = type::Encoding<7923>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"  [][]          ",
		"    [][]        ",
		"      [][]      ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<ygrave::encoding>
{
	using glyph = ygrave;
};

struct uni1EF4
{
	using encoding = type::Encoding<7924>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-3}};
	static constexpr char bitmap[17][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"                        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1EF4::encoding>
{
	using glyph = uni1EF4;
};

struct uni1EF5
{
	using encoding = type::Encoding<7925>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-7}};
	static constexpr char bitmap[17][17] = {
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        ",
		"                ",
		"    [][]        ",
		"    [][]        "};
};

template<>
struct lockup<uni1EF5::encoding>
{
	using glyph = uni1EF5;
};

struct uni1EF8
{
	using encoding = type::Encoding<7928>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[18][25] = {
		"        [][]    []      ",
		"      []  [][]  []      ",
		"      []    [][]        ",
		"                        ",
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"    [][]        [][]    ",
		"    [][][]    [][][]    ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<uni1EF8::encoding>
{
	using glyph = uni1EF8;
};

struct uni1EF9
{
	using encoding = type::Encoding<7929>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"    [][]    []  ",
		"  []  [][]  []  ",
		"  []    [][]    ",
		"                ",
		"[][]        [][]",
		"[][]        [][]",
		"[][]        [][]",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"  [][]    [][]  ",
		"    []    []    ",
		"    [][][][]    ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"  [][][]        ",
		"  [][][]        "};
};

template<>
struct lockup<uni1EF9::encoding>
{
	using glyph = uni1EF9;
};

struct uni2000
{
	using encoding = type::Encoding<8192>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2000::encoding>
{
	using glyph = uni2000;
};

struct uni2001
{
	using encoding = type::Encoding<8193>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2001::encoding>
{
	using glyph = uni2001;
};

struct uni2002
{
	using encoding = type::Encoding<8194>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2002::encoding>
{
	using glyph = uni2002;
};

struct uni2003
{
	using encoding = type::Encoding<8195>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2003::encoding>
{
	using glyph = uni2003;
};

struct uni2004
{
	using encoding = type::Encoding<8196>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2004::encoding>
{
	using glyph = uni2004;
};

struct uni2005
{
	using encoding = type::Encoding<8197>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2005::encoding>
{
	using glyph = uni2005;
};

struct uni2006
{
	using encoding = type::Encoding<8198>;
	static constexpr auto next = type::Width{3};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2006::encoding>
{
	using glyph = uni2006;
};

struct uni2007
{
	using encoding = type::Encoding<8199>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2007::encoding>
{
	using glyph = uni2007;
};

struct uni2008
{
	using encoding = type::Encoding<8200>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2008::encoding>
{
	using glyph = uni2008;
};

struct uni2009
{
	using encoding = type::Encoding<8201>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni2009::encoding>
{
	using glyph = uni2009;
};

struct uni200A
{
	using encoding = type::Encoding<8202>;
	static constexpr auto next = type::Width{2};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni200A::encoding>
{
	using glyph = uni200A;
};

struct uni200B
{
	using encoding = type::Encoding<8203>;
	static constexpr auto next = type::Width{0};
	static constexpr auto size =
		type::Size{type::Width{1}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[1][3] = {
		"  "};
};

template<>
struct lockup<uni200B::encoding>
{
	using glyph = uni200B;
};

struct uni2010
{
	using encoding = type::Encoding<8208>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][11] = {
		"[][][][][]"};
};

template<>
struct lockup<uni2010::encoding>
{
	using glyph = uni2010;
};

struct uni2011
{
	using encoding = type::Encoding<8209>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][11] = {
		"[][][][][]"};
};

template<>
struct lockup<uni2011::encoding>
{
	using glyph = uni2011;
};

struct figuredash
{
	using encoding = type::Encoding<8210>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][23] = {
		"[][][][][][][][][][][]"};
};

template<>
struct lockup<figuredash::encoding>
{
	using glyph = figuredash;
};

struct endash
{
	using encoding = type::Encoding<8211>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][23] = {
		"[][][][][][][][][][][]"};
};

template<>
struct lockup<endash::encoding>
{
	using glyph = endash;
};

struct emdash
{
	using encoding = type::Encoding<8212>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{19}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][39] = {
		"[][][][][][][][][][][][][][][][][][][]"};
};

template<>
struct lockup<emdash::encoding>
{
	using glyph = emdash;
};

struct afii00208
{
	using encoding = type::Encoding<8213>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{19}, type::Height{1}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{5}};
	static constexpr char bitmap[1][39] = {
		"[][][][][][][][][][][][][][][][][][][]"};
};

template<>
struct lockup<afii00208::encoding>
{
	using glyph = afii00208;
};

struct quoteleft
{
	using encoding = type::Encoding<8216>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][5] = {
		"  []",
		"[]  ",
		"[]  ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<quoteleft::encoding>
{
	using glyph = quoteleft;
};

struct quoteright
{
	using encoding = type::Encoding<8217>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][5] = {
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<quoteright::encoding>
{
	using glyph = quoteright;
};

struct quotesinglbase
{
	using encoding = type::Encoding<8218>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[5][5] = {
		"[][]",
		"[][]",
		"  []",
		"  []",
		"[]  "};
};

template<>
struct lockup<quotesinglbase::encoding>
{
	using glyph = quotesinglbase;
};

struct quotereversed
{
	using encoding = type::Encoding<8219>;
	static constexpr auto next = type::Width{4};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][5] = {
		"[][]",
		"[][]",
		"[]  ",
		"[]  ",
		"  []"};
};

template<>
struct lockup<quotereversed::encoding>
{
	using glyph = quotereversed;
};

struct quotedblleft
{
	using encoding = type::Encoding<8220>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][11] = {
		"  []    []",
		"[]    []  ",
		"[]    []  ",
		"[][]  [][]",
		"[][]  [][]"};
};

template<>
struct lockup<quotedblleft::encoding>
{
	using glyph = quotedblleft;
};

struct quotedblright
{
	using encoding = type::Encoding<8221>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"  []    []",
		"  []    []",
		"[]    []  "};
};

template<>
struct lockup<quotedblright::encoding>
{
	using glyph = quotedblright;
};

struct quotedblbase
{
	using encoding = type::Encoding<8222>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[5][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"  []    []",
		"  []    []",
		"[]    []  "};
};

template<>
struct lockup<quotedblbase::encoding>
{
	using glyph = quotedblbase;
};

struct uni201F
{
	using encoding = type::Encoding<8223>;
	static constexpr auto next = type::Width{7};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{9}};
	static constexpr char bitmap[5][11] = {
		"[][]  [][]",
		"[][]  [][]",
		"[]    []  ",
		"[]    []  ",
		"  []    []"};
};

template<>
struct lockup<uni201F::encoding>
{
	using glyph = uni201F;
};

struct dagger
{
	using encoding = type::Encoding<8224>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<dagger::encoding>
{
	using glyph = dagger;
};

struct daggerdbl
{
	using encoding = type::Encoding<8225>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{18}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[18][17] = {
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"      [][]      ",
		"      [][]      ",
		"      [][]      ",
		"      [][]      "};
};

template<>
struct lockup<daggerdbl::encoding>
{
	using glyph = daggerdbl;
};

struct bullet
{
	using encoding = type::Encoding<8226>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{5}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{4}};
	static constexpr char bitmap[5][9] = {
		"  [][]  ",
		"[][][][]",
		"[][][][]",
		"[][][][]",
		"  [][]  "};
};

template<>
struct lockup<bullet::encoding>
{
	using glyph = bullet;
};

struct ellipsis
{
	using encoding = type::Encoding<8230>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[2][29] = {
		"[][]        [][]        [][]",
		"[][]        [][]        [][]"};
};

template<>
struct lockup<ellipsis::encoding>
{
	using glyph = ellipsis;
};

struct perthousand
{
	using encoding = type::Encoding<8240>;
	static constexpr auto next = type::Width{20};
	static constexpr auto size =
		type::Size{type::Width{19}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[13][39] = {
		"    [][]          [][]                ",
		"  [][][][]      [][]                  ",
		"[][]    [][]    [][]                  ",
		"[][]    [][]  [][]                    ",
		"  [][][][]    [][]                    ",
		"    [][]    [][]                      ",
		"            [][]                      ",
		"          [][]    [][]        [][]    ",
		"          [][]  [][][][]    [][][][]  ",
		"        [][]  [][]    [][][][]    [][]",
		"        [][]  [][]    [][][][]    [][]",
		"      [][]      [][][][]    [][][][]  ",
		"      [][]        [][]        [][]    "};
};

template<>
struct lockup<perthousand::encoding>
{
	using glyph = perthousand;
};

struct guilsinglleft
{
	using encoding = type::Encoding<8249>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{1}};
	static constexpr char bitmap[8][9] = {
		"      []",
		"    [][]",
		"  [][]  ",
		"[][]    ",
		"[][]    ",
		"  [][]  ",
		"    [][]",
		"      []"};
};

template<>
struct lockup<guilsinglleft::encoding>
{
	using glyph = guilsinglleft;
};

struct guilsinglright
{
	using encoding = type::Encoding<8250>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{1}};
	static constexpr char bitmap[8][9] = {
		"[]      ",
		"[][]    ",
		"  [][]  ",
		"    [][]",
		"    [][]",
		"  [][]  ",
		"[][]    ",
		"[]      "};
};

template<>
struct lockup<guilsinglright::encoding>
{
	using glyph = guilsinglright;
};

struct fraction
{
	using encoding = type::Encoding<8260>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{13}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{-2}, type::Y{0}};
	static constexpr char bitmap[13][19] = {
		"              [][]",
		"              [][]",
		"            [][]  ",
		"          [][]    ",
		"          [][]    ",
		"        [][]      ",
		"        []        ",
		"      [][]        ",
		"    [][]          ",
		"    [][]          ",
		"  [][]            ",
		"[][]              ",
		"[][]              "};
};

template<>
struct lockup<fraction::encoding>
{
	using glyph = fraction;
};

struct oneinferior
{
	using encoding = type::Encoding<8321>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{4}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[8][9] = {
		"    [][]",
		"[][][][]",
		"[][][][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]",
		"    [][]"};
};

template<>
struct lockup<oneinferior::encoding>
{
	using glyph = oneinferior;
};

struct twoinferior
{
	using encoding = type::Encoding<8322>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[8][11] = {
		"  [][][]  ",
		"[][][][][]",
		"[]    [][]",
		"      [][]",
		"    [][]  ",
		"  [][]    ",
		"[][][][][]",
		"[][][][][]"};
};

template<>
struct lockup<twoinferior::encoding>
{
	using glyph = twoinferior;
};

struct threeinferior
{
	using encoding = type::Encoding<8323>;
	static constexpr auto next = type::Width{6};
	static constexpr auto size =
		type::Size{type::Width{5}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-4}};
	static constexpr char bitmap[8][11] = {
		"  [][][]  ",
		"[][][][][]",
		"[]    [][]",
		"    [][]  ",
		"    [][]  ",
		"[]    [][]",
		"[][][][][]",
		"  [][][]  "};
};

template<>
struct lockup<threeinferior::encoding>
{
	using glyph = threeinferior;
};

struct uni20A5
{
	using encoding = type::Encoding<8357>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[14][29] = {
		"                [][]        ",
		"                [][]        ",
		"[][]  [][][][]  [][][][][]  ",
		"[][][][][][][][][][][][][][]",
		"[][][]      [][][]      [][]",
		"[][]        [][][]      [][]",
		"[][]        [][][]      [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]        [][]        [][]",
		"[][]      [][][]        [][]",
		"[][]      [][][]        [][]",
		"          [][]              ",
		"          [][]              "};
};

template<>
struct lockup<uni20A5::encoding>
{
	using glyph = uni20A5;
};

struct uni20A6
{
	using encoding = type::Encoding<8358>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{11}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][23] = {
		"[][]              [][]",
		"[][][]            [][]",
		"[][][][]          [][]",
		"[][][][]          [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]    [][]      [][]",
		"[][][][][][][][][][][]",
		"[][][][][][][][][][][]",
		"[][]        [][]  [][]",
		"[][]          [][][][]",
		"[][]          [][][][]",
		"[][]            [][][]",
		"[][]              [][]"};
};

template<>
struct lockup<uni20A6::encoding>
{
	using glyph = uni20A6;
};

struct uni20A9
{
	using encoding = type::Encoding<8361>;
	static constexpr auto next = type::Width{18};
	static constexpr auto size =
		type::Size{type::Width{16}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][33] = {
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]          [][]          [][]",
		"[][]        [][][][]        [][]",
		"  [][]    [][][][][][][]  [][]  ",
		"  [][]    [][][][][][][]  [][]  ",
		"  [][]    [][]    [][]    [][]  ",
		"  [][]    [][][][][][][]  [][]  ",
		"    [][]  [][][][][][][][][]    ",
		"    [][]  [][]    [][]  [][]    ",
		"    [][]  []        []  [][]    ",
		"      [][][]        [][][]      ",
		"      [][]            [][]      ",
		"      [][]            [][]      "};
};

template<>
struct lockup<uni20A9::encoding>
{
	using glyph = uni20A9;
};

struct Euro
{
	using encoding = type::Encoding<8364>;
	static constexpr auto next = type::Width{14};
	static constexpr auto size =
		type::Size{type::Width{13}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][27] = {
		"          [][][][][]      ",
		"      [][][][][][][][][]  ",
		"    [][][]          [][][]",
		"    [][]              [][]",
		"[][][][][][][]            ",
		"[][][][][][][]            ",
		"  [][]                    ",
		"[][][][][][][]            ",
		"[][][][][][][]            ",
		"  [][][]                  ",
		"    [][]              [][]",
		"    [][][]          [][][]",
		"      [][][][][][][][][]  ",
		"          [][][][][]      "};
};

template<>
struct lockup<Euro::encoding>
{
	using glyph = Euro;
};

struct uni20AD
{
	using encoding = type::Encoding<8365>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][][][][][][][][]",
		"[][][][][][][][][][][][]",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]"};
};

template<>
struct lockup<uni20AD::encoding>
{
	using glyph = uni20AD;
};

struct uni2103
{
	using encoding = type::Encoding<8451>;
	static constexpr auto next = type::Width{21};
	static constexpr auto size =
		type::Size{type::Width{19}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][39] = {
		"                      [][][][][]      ",
		"  [][][]          [][][][][][][][][]  ",
		"[][]  [][]      [][][]          [][][]",
		"[]      []      [][]              [][]",
		"[][]  [][]    [][][]                  ",
		"  [][][]      [][]                    ",
		"              [][]                    ",
		"              [][]                    ",
		"              [][]                    ",
		"              [][][]                  ",
		"                [][]              [][]",
		"                [][][]          [][][]",
		"                  [][][][][][][][][]  ",
		"                      [][][][][]      "};
};

template<>
struct lockup<uni2103::encoding>
{
	using glyph = uni2103;
};

struct uni2109
{
	using encoding = type::Encoding<8457>;
	static constexpr auto next = type::Width{19};
	static constexpr auto size =
		type::Size{type::Width{17}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[14][35] = {
		"                [][][][][][][][][]",
		"  [][][]        [][][][][][][][][]",
		"[][]  [][]      [][]              ",
		"[]      []      [][]              ",
		"[][]  [][]      [][]              ",
		"  [][][]        [][]              ",
		"                [][][][][][][][]  ",
		"                [][][][][][][][]  ",
		"                [][]              ",
		"                [][]              ",
		"                [][]              ",
		"                [][]              ",
		"                [][]              ",
		"                [][]              "};
};

template<>
struct lockup<uni2109::encoding>
{
	using glyph = uni2109;
};

struct trademark
{
	using encoding = type::Encoding<8482>;
	static constexpr auto next = type::Width{16};
	static constexpr auto size =
		type::Size{type::Width{14}, type::Height{7}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{6}};
	static constexpr char bitmap[7][29] = {
		"[][][][][]    []          []",
		"    []        [][]      [][]",
		"    []        [][]      [][]",
		"    []        []  []  []  []",
		"    []        []  []  []  []",
		"    []        []    []    []",
		"    []        []    []    []"};
};

template<>
struct lockup<trademark::encoding>
{
	using glyph = trademark;
};

struct uni212A
{
	using encoding = type::Encoding<8490>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]            [][][]  ",
		"[][]          [][][]    ",
		"[][]        [][][]      ",
		"[][]      [][][]        ",
		"[][]    [][][]          ",
		"[][]  [][][]            ",
		"[][][][][]              ",
		"[][][][][][]            ",
		"[][]    [][][]          ",
		"[][]      [][][]        ",
		"[][]        [][][]      ",
		"[][]          [][][]    ",
		"[][]            [][][]  ",
		"[][]              [][][]"};
};

template<>
struct lockup<uni212A::encoding>
{
	using glyph = uni212A;
};

struct uni212B
{
	using encoding = type::Encoding<8491>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{17}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[17][25] = {
		"          [][]          ",
		"        []    []        ",
		"        []    []        ",
		"          [][]          ",
		"          [][]          ",
		"        [][][][]        ",
		"        [][][][]        ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"    [][][][][][][][]    ",
		"  [][][][][][][][][][]  ",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"[][]                [][]",
		"[][]                [][]"};
};

template<>
struct lockup<uni212B::encoding>
{
	using glyph = uni212B;
};

struct uni2132
{
	using encoding = type::Encoding<8498>;
	static constexpr auto next = type::Width{12};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"  [][][][][][][][]",
		"  [][][][][][][][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"              [][]",
		"[][][][][][][][][]",
		"[][][][][][][][][]"};
};

template<>
struct lockup<uni2132::encoding>
{
	using glyph = uni2132;
};

struct universal
{
	using encoding = type::Encoding<8704>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{12}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][25] = {
		"[][]                [][]",
		"[][]                [][]",
		"  [][]            [][]  ",
		"  [][]            [][]  ",
		"  [][][][][][][][][][]  ",
		"    [][][][][][][][]    ",
		"    [][]        [][]    ",
		"    [][]        [][]    ",
		"      [][]    [][]      ",
		"      [][]    [][]      ",
		"        [][][][]        ",
		"        [][][][]        ",
		"          [][]          ",
		"          [][]          "};
};

template<>
struct lockup<universal::encoding>
{
	using glyph = universal;
};

struct existential
{
	using encoding = type::Encoding<8707>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"  [][][][][][][][][]",
		"  [][][][][][][][][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"                [][]",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<existential::encoding>
{
	using glyph = existential;
};

struct uni2204
{
	using encoding = type::Encoding<8708>;
	static constexpr auto next = type::Width{13};
	static constexpr auto size =
		type::Size{type::Width{10}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{0}};
	static constexpr char bitmap[14][21] = {
		"[][][][][][][][][][]",
		"[][][][][][][][][][]",
		"            [][][][]",
		"            [][][][]",
		"          [][]  [][]",
		"          [][]  [][]",
		"  [][][][][][][][][]",
		"  [][][][][][][][][]",
		"        [][]    [][]",
		"        [][]    [][]",
		"      [][]      [][]",
		"      [][]      [][]",
		"[][][][][][][][][][]",
		"[][][][][][][][][][]"};
};

template<>
struct lockup<uni2204::encoding>
{
	using glyph = uni2204;
};

struct minus
{
	using encoding = type::Encoding<8722>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{2}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{4}};
	static constexpr char bitmap[2][19] = {
		"[][][][][][][][][]",
		"[][][][][][][][][]"};
};

template<>
struct lockup<minus::encoding>
{
	using glyph = minus;
};

struct uni2236
{
	using encoding = type::Encoding<8758>;
	static constexpr auto next = type::Width{5};
	static constexpr auto size =
		type::Size{type::Width{2}, type::Height{10}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{0}};
	static constexpr char bitmap[10][5] = {
		"[][]",
		"[][]",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"    ",
		"[][]",
		"[][]"};
};

template<>
struct lockup<uni2236::encoding>
{
	using glyph = uni2236;
};

struct uni2259
{
	using encoding = type::Encoding<8793>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{9}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{2}};
	static constexpr char bitmap[9][15] = {
		"      [][]    ",
		"    [][][][]  ",
		"  [][]    [][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<uni2259::encoding>
{
	using glyph = uni2259;
};

struct uni225A
{
	using encoding = type::Encoding<8794>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{9}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{2}};
	static constexpr char bitmap[9][15] = {
		"  [][]    [][]",
		"    [][][][]  ",
		"      [][]    ",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<uni225A::encoding>
{
	using glyph = uni225A;
};

struct notequal
{
	using encoding = type::Encoding<8800>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{2}, type::Y{-2}};
	static constexpr char bitmap[14][15] = {
		"        [][]  ",
		"        [][]  ",
		"        [][]  ",
		"        [][]  ",
		"      [][]    ",
		"[][][][][][][]",
		"[][][][][][][]",
		"    [][]      ",
		"[][][][][][][]",
		"[][][][][][][]",
		"  [][]        ",
		"  [][]        ",
		"  [][]        ",
		"  [][]        "};
};

template<>
struct lockup<notequal::encoding>
{
	using glyph = notequal;
};

struct equivalence
{
	using encoding = type::Encoding<8801>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{8}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{1}};
	static constexpr char bitmap[8][15] = {
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]",
		"              ",
		"[][][][][][][]",
		"[][][][][][][]"};
};

template<>
struct lockup<equivalence::encoding>
{
	using glyph = equivalence;
};

struct uni2262
{
	using encoding = type::Encoding<8802>;
	static constexpr auto next = type::Width{11};
	static constexpr auto size =
		type::Size{type::Width{7}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{-2}};
	static constexpr char bitmap[14][15] = {
		"        [][]  ",
		"        [][]  ",
		"        [][]  ",
		"[][][][][][][]",
		"[][][][][][][]",
		"      [][]    ",
		"[][][][][][][]",
		"[][][][][][][]",
		"    [][]      ",
		"[][][][][][][]",
		"[][][][][][][]",
		"  [][]        ",
		"  [][]        ",
		"  [][]        "};
};

template<>
struct lockup<uni2262::encoding>
{
	using glyph = uni2262;
};

struct lessequal
{
	using encoding = type::Encoding<8804>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[12][17] = {
		"            [][]",
		"        [][][][]",
		"    [][][][]    ",
		"  [][][]        ",
		"[][]            ",
		"  [][][]        ",
		"    [][][][]    ",
		"        [][][][]",
		"            [][]",
		"                ",
		"[][][][][][][][]",
		"[][][][][][][][]"};
};

template<>
struct lockup<lessequal::encoding>
{
	using glyph = lessequal;
};

struct greaterequal
{
	using encoding = type::Encoding<8805>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{12}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-3}};
	static constexpr char bitmap[12][17] = {
		"[][]            ",
		"[][][][]        ",
		"    [][][][]    ",
		"        [][][]  ",
		"            [][]",
		"        [][][]  ",
		"    [][][][]    ",
		"[][][][]        ",
		"[][]            ",
		"                ",
		"[][][][][][][][]",
		"[][][][][][][][]"};
};

template<>
struct lockup<greaterequal::encoding>
{
	using glyph = greaterequal;
};

struct uni226E
{
	using encoding = type::Encoding<8814>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"          [][]  ",
		"          [][]  ",
		"          [][][]",
		"        [][][][]",
		"    [][][][]    ",
		"  [][][][][]    ",
		"[][]  [][]      ",
		"  [][][][]      ",
		"    [][][][]    ",
		"    [][][][][][]",
		"    [][]    [][]",
		"    [][]        ",
		"    [][]        "};
};

template<>
struct lockup<uni226E::encoding>
{
	using glyph = uni226E;
};

struct uni226F
{
	using encoding = type::Encoding<8815>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-2}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"          [][]  ",
		"          [][]  ",
		"[][]      [][]  ",
		"[][][][][][]    ",
		"    [][][][]    ",
		"        [][][]  ",
		"      [][]  [][]",
		"      [][][][]  ",
		"    [][][][]    ",
		"[][][][]        ",
		"[][][][]        ",
		"    [][]        ",
		"    [][]        "};
};

template<>
struct lockup<uni226F::encoding>
{
	using glyph = uni226F;
};

struct uni2270
{
	using encoding = type::Encoding<8816>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"          [][][]",
		"        [][][][]",
		"    [][][][][]  ",
		"  [][][][][]    ",
		"[][]    [][]    ",
		"  [][][][][]    ",
		"    [][][][]    ",
		"      [][][][][]",
		"      [][]  [][]",
		"    [][]        ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"    [][]        "};
};

template<>
struct lockup<uni2270::encoding>
{
	using glyph = uni2270;
};

struct uni2271
{
	using encoding = type::Encoding<8817>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{8}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{1}, type::Y{-4}};
	static constexpr char bitmap[14][17] = {
		"          [][]  ",
		"[][]      [][]  ",
		"[][][][]  [][]  ",
		"    [][][][][]  ",
		"        [][][]  ",
		"        [][][][]",
		"        [][][]  ",
		"    [][][][]    ",
		"[][][][][]      ",
		"[][]  [][]      ",
		"    [][]        ",
		"[][][][][][][][]",
		"[][][][][][][][]",
		"    [][]        "};
};

template<>
struct lockup<uni2271::encoding>
{
	using glyph = uni2271;
};

struct fi
{
	using encoding = type::Encoding<-1>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"      [][][]  [][]",
		"    [][][][]  [][]",
		"    [][]          ",
		"    [][]          ",
		"[][][][][][]  [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]"};
};

template<>
struct lockup<fi::encoding>
{
	using glyph = fi;
};

struct fl
{
	using encoding = type::Encoding<-1>;
	static constexpr auto next = type::Width{10};
	static constexpr auto size =
		type::Size{type::Width{9}, type::Height{14}};
	static constexpr auto lower_left_corner =
		type::Point{type::X{0}, type::Y{0}};
	static constexpr char bitmap[14][19] = {
		"      [][][]  [][]",
		"    [][][][]  [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"[][][][][][]  [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]",
		"    [][]      [][]"};
};


};

} //namespace font

} //namespace pixel_display

