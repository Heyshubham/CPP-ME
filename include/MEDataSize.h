#include<string>
namespace MEDataSize
{
	enum class UNITS
	{
		BYTES = 0, KB, MB, GB, TB, PB, EB, ZB,
	};
	std::string getSizeStr(long double size, UNITS inputUnit, std::string format = "%.2LF");	
}