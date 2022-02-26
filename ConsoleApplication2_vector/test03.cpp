#include <vector>
#include <iostream>
std::vector<int> f();

int main()
{
	std::vector<int> a = f();
	
	if (a.empty()) {
		//内容が無しであれば、そもそもポインタは駄目
	}
	else {
		for (auto p = &a.front(); ; ) {
			std::cout << *p++ << '\n';
			if (p == &a.back() + 1)
				break;
		}
	}
}




std::vector<int> f()
{
	return { 1, 20, 300, 4000 };
}
