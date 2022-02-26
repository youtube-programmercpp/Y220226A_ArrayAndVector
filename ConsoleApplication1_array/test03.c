#include <stdio.h>
int main()
{
	//配列の中身：「要素」element
	//          [0] [1] [2]
	int a[] = { 10, 50, 2000 };
	for (int i = 0; i < 3; ++i) {
		printf("%d\n", a[i]);
	}
}
