#include <vector>
class sample {
	int x;
	int y;
public:
	sample() noexcept
		: x()
		, y()
	{
	}
	sample(int x, int y) noexcept
		: x(x)
		, y(y)
	{
	}
};
int main()
{
	std::vector<sample> a;
	a.push_back({ 10, 50 });//�ꎞ�I�u�W�F�N�g
	a.emplace_back(300, 900);
}
