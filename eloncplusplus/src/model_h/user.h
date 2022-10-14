#include <list>
#include <string>
#include <vector>
#include <map>

class CUser 
{
public:
	CUser();
	~CUser();

	std::string toString();

	static void* operator new(size_t size);
	static void operator delete(void* p, size_t size);

private:
	std::list<std::string> lstName_;
	std::vector<int> vecAge_;

	std::map<std::string, int> mapAge_;
};