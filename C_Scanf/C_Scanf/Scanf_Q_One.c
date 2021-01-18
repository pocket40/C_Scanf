#include <stdio.h>

int scanf_Q_One(void)
{
	int num1, num2;
	printf("두개의 숫자를 입력해주세요");
	scanf_s("%d %d", &num1, &num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	return 0;
}