#include <stdio.h>

int Scanf_Q_Three(void)
{
	int num;
	printf("�ϳ��� ���� �Է�:");
	scanf_s("%d", &num);
	printf("%d ������ ��� %d: ", num, num * num);
	return 0;
}