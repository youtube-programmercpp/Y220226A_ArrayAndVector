#include <iostream>
#include <string>
struct sample {
	sample()//�f�t�H���g�R���X�g���N�^
		: sample(0, 0)
	{
		std::cout << __FUNCTION__ "���Ăяo����܂����B\n";
	}
	sample(int x, int y)
		: x(x), y(y)
	{
	}
	int x, y;
};
int main()
{
	sample a[2] = { {10, 100}, {20, 200} };

}
