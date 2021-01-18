#include <stdio.h>

int main(void)
{
	int num1, num2, num3, result;
	printf("세개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	/*result = (num1 + num2) * (num2 + num3) * (num3 % num1);*/
	printf("연산 결과: %d\n", (num1 + num2) * (num2 + num3) * (num3 % num1));
	return 0;
}