#ifndef MESET_CPP
#define MESET_CPP

#include <include/MESet.h>
#include <include/MEString.h>
#include <sstream>
namespace MESet
{
	template<typename T>
	std::string join(const std::set<T> & s, const std::string delim)
	{
		static_assert(std::is_arithmetic<T>::value, "Not an arithmetic type");
		std::stringstream ss("");
		for(auto t: s)
			ss <<t <<delim;
		string temp = ss.str();
		return MMString::rtrim(temp, delim);
	}
}

#endif