#include <stdio.h>

int scanfOne(void)
{
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf_s("%d", &num1); //ù��° �����Է�
	printf("���� two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d", num1, num2, result);
	return 0;
}