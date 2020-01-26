#include<set>
#include<string>
#include<vector>
namespace MEString
{
	bool isCharPointerUsable(const char * &p);
	
	void ltrim(std::string &in, const std::set<char> & trimmedCharacter);
	void rtrim(std::string &in, const std::set<char>& trimmedCharacter);
	void trim(std::string &in, const std::set<char>& trimmedCharacter);
	
	std::vector<std::string> split(const std::string& i_str, const std::string& i_delim);
	
	
	void replaceAll(std::string & data, const std::string &toSearch, const std::string &replaceStr);
}