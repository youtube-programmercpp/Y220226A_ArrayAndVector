#include <stdio.h>

void display(const int a[], int i)
{
	for (int j = 0; j < i; ++j)
		printf("a[%d] = %d\n", j, a[j]);
}
int main()
{
	int a[3];
	int i = 0;
	for (; ; ) {
		// ～int 型が 4 バイトである場合のお話として～
		// sizeof  a … 配列 a の大きさをバイト数で取得 5 × 4 バイト＝ 20 バイト
		// sizeof *a … a[0] の大きさをバイト数で取得 4 バイト 
		// sizeof a[0] … sizeof *a と同じ
		if (i < sizeof a / sizeof *a) {
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
