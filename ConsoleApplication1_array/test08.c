int main()
{
	int a[] = { 1, 2, 3 };
	// a �Ə������� &a[0] �̈Ӗ�
	* a    = 5;
	*&a[0] = 6;
}