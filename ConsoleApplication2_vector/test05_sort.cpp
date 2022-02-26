#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
	std::vector<int> a{ 1, 20, -5, 300, -900, 4000 };
	std::sort(a.begin(), a.end());
	for (const auto& r : a) {
		std::cout << r << '\n';
	}
}
