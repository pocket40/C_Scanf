#include <stdio.h>

int Scanf_Q_Two(void)
{
	int num1, num2, num3;
	int result;
	printf("������ ������ �Է��ϼ���");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d x %d + %d = %d", num1, num2, num3, result);
	return 0;
}