#include <stdio.h>

int scanfOne(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1); //첫번째 정수입력
	printf("정수 two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d", num1, num2, result);
	return 0;
}