#include <vector>
#include <iostream>
int main()
{
	std::vector<int> a = { 1, 20, 300, 4000 };
	for (auto it = a.begin(); ; ) {
		if (it == a.end())
			break;
		else {
			//まだ end ではない
			std::cout << *it++ << '\n';
		}
	}
}
