#include <vector>
#include <iostream>
std::vector<int> f()
{
	return { 1, 20, -5, 300, -900, 4000 };
}
int main()
{
	std::vector<int> a = f();
	for (auto it = a.begin();;) {
		if (it == a.end())
			break;
		else {
			if (*it < 0)
				it = a.erase(it);
			else
				++it;
		}
	}
	//range-based for statement
	for (const auto& r : a) {
		std::cout << r << '\n';
	}
}
