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
		// �`int �^�� 4 �o�C�g�ł���ꍇ�̂��b�Ƃ��ā`
		// sizeof  a �c �z�� a �̑傫�����o�C�g���Ŏ擾 5 �~ 4 �o�C�g�� 20 �o�C�g
		// sizeof *a �c a[0] �̑傫�����o�C�g���Ŏ擾 4 �o�C�g 
		// sizeof a[0] �c sizeof *a �Ɠ���
		if (i < sizeof a / sizeof *a) {
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
