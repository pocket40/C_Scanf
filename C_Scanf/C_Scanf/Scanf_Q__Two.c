#include <stdio.h>

int Scanf_Q_Two(void)
{
	int num1, num2, num3;
	int result;
	printf("세게의 정수를 입력하세요");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d x %d + %d = %d", num1, num2, num3, result);
	return 0;
}