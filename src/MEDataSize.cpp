#ifndef MEDATA_SIZE_CPP
#define MEDATA_SIZE_CPP

#include <include/MEDataSize.h>
#include <cstdio>
#include <vector>
namespace MEDataSize
{
	
	std::string getSizeStr(long double size, UNITS inputUnit, std::string format /*= %.2LF*/)
	{
		std::string units[8] = {"BYTES", "KB", "MB", "GB", "TB", "PB", "EB", "ZB"};
		size_t startIndex = static_cast<int>(inputUnit);
		while(startIndex < 8 && size >= 1024)
		{
			startIndex++;
			size /= 1024;
		}
		char outStr[128] = {0};
		format += " " + units[startIndex];
		std::snprintf(outStr, 128, format.c_str(), size);
		return outStr;
	}
}
#endif