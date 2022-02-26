#include <stdio.h>

void display(const int a[], int i)
{
	for (int j = 0; j < i; ++j)
		printf("a[%d] = %d\n", j, a[j]);
}
int main()
{
	int a[3];// マジックナンバー magic number
	int i = 0;
	for (; ; ) {
		if (i < 3) {
			if (scanf_s("%d", &a[i]) == 1) {
				//入力成功
				++i;
				continue;
			}
			else {
				//途中までは入っている（または１個も入っていない場合もあるが）
				//しかし、入力エラー発生
				display(a, i);
				break;
			}
		}
		else {
			//全部入力できた
			display(a, i);
			break;
		}
	}
}
