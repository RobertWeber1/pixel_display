#pragma once
#include <string>

namespace display
{

class Version
{
public:
	static const std::string project_name;

	static const unsigned int major;
	static const unsigned int minor;
	static const unsigned int patch;
	static const std::string str;

	static const std::string build_date;
	static const std::string git_tag;
	static const std::string commit_hash;
};

} //namespace display
