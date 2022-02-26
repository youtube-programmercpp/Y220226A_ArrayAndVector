#include <iostream>
#include <algorithm>
int main()
{
	int a[] = {1, 20, -5, 300, -900, 4000   };
	std::sort(a, std::end(a));
	for (const auto& r : a) {
		std::cout << r << '\n';
	}
}
