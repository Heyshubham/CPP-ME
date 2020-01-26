#ifndef MESTRING_CPP
#define MESTRING_CPP

#include <include/MEString.h>
#include <include/MESet.h>
namespace MEString
{
	bool isCharPointerUsable(const char * &p)
	{
		return (p != NULL) && (*p != '\0');
	}
	
	void ltrim(std::string &in, const std::set<char>& trimmedCharacter)
	{
		size_t startIndex = 0;
		while(startIndex < in.size() && trimmedCharacter.find(in[startIndex]) != trimmedCharacter.end())
		{
			startIndex++;
		}
		in = (startIndex < in.size() ? in.substr(startIndex) : "" );
		return;
	}
	
	void rtrim(std::string &in, const std::set<char>& trimmedCharacter)
	{
		size_t endIndex = in.size() -1;
		while(endIndex>=0 && trimmedCharacter.find(in[endIndex]) != trimmedCharacter.end())
		{
			endIndex--;
		}
		in = (endIndex >= 0 ? in.substr(0 , endIndex + 1) : "" );
		return;
	}
	
	void trim(std::string &in, std::set<char> trimmedCharacter)
	{
		ltrim(in, trimmedCharacter);
		rtrim(in, trimmedCharacter);
		return;
	}
	
	std::vector<std::string> split(const std::string& i_str, const std::string& i_delim)
	{
		std::vector<std::string> result;
	
		size_t found = i_str.find(i_delim);
		size_t startIndex = 0;

		while(found != std::string::npos)
		{
			result.push_back(std::string(i_str.begin()+startIndex, i_str.begin()+found));
			startIndex = found + i_delim.size();
			found = i_str.find(i_delim, startIndex);
		}
		if(startIndex != i_str.size())
			result.push_back(std::string(i_str.begin()+startIndex, i_str.end()));
		return result;		
	}
	
	void replaceFirstOccurrence(std::string & data, const std::string &toSearch, const std::string &replaceStr)
	{
		// Get the first occurrence
		size_t pos = data.find(toSearch);
		if( pos != std::string::npos)
		{
			// Replace this occurrence of Sub String
			data.replace(pos, toSearch.size(), replaceStr);
		}
	}
	
	void replaceAll(std::string & data, const std::string &toSearch, const std::string &replaceStr)
	{
		// Get the first occurrence
		size_t pos = data.find(toSearch);
		// Repeat till end is reached
		while( pos != std::string::npos)
		{
			// Replace this occurrence of Sub String
			data.replace(pos, toSearch.size(), replaceStr);
			// Get the next occurrence from the current position
			pos =data.find(toSearch, pos + replaceStr.size());
		}
	}
}

#endif