#include <stdio.h>
int main()
{
	//         a[0], a[1], a[2]
	int a[] = { 1, 20, 300 };
	int* first = a;
	int* last = &a[ sizeof a / sizeof *a ];

	for (;first < last;++first) {
		printf("%d\n", *first);
	}
}
