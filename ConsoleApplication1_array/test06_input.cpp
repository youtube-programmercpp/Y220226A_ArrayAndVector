#include <stdio.h>

void display(const int a[], int i)
{
	for (int j = 0; j < i; ++j)
		printf("a[%d] = %d\n", j, a[j]);
}
int main()
{
	int a[3];// �}�W�b�N�i���o�[ magic number
	int i = 0;
	for (; ; ) {
		if (i < 3) {
			if (scanf_s("%d", &a[i]) == 1) {
				//���͐���
				++i;
				continue;
			}
			else {
				//�r���܂ł͓����Ă���i�܂��͂P�������Ă��Ȃ��ꍇ�����邪�j
				//�������A���̓G���[����
				display(a, i);
				break;
			}
		}
		else {
			//�S�����͂ł���
			display(a, i);
			break;
		}
	}
}
