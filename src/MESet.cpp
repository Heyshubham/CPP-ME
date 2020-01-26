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
		std::stringstream ss("");
		for(const auto &t: s)
			ss <<t <<delim;
		std::string temp = ss.str();
		if(temp.size()> 0)
		{
			temp = std::string(temp.begin(), temp.end()-delim.size());
		}
		return temp;
	}
}

#endif