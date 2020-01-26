#include<set>
#include<string>
namespace MEMemory
{
	template<typename T>
	void safeDelete(T* &p)
	{
		if(p)
		{
			delete p;
			p = nullptr;
		}
	}
	
	
	template<typename T>
	void safeDeleteArray(T* &p)
	{
		if(p)
		{
			delete[] p;
			p = nullptr;
		}
	}
}