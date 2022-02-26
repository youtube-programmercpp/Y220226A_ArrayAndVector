#include <vector>
#include <string>
#include <iostream>
int main()
{
	std::vector<std::string> a;
	a.push_back("ABC");
	a.push_back("DEF");
	a.push_back("GHI");

	std::cout << a[0] << '\n';//a[0] ‚Æ a.front() 
	std::cout << a.back() << '\n';//a[2] ‚Æ‚¢‚¤‚© a ‚ÌÅŒã‚Ì—v‘f
}
