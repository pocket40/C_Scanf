#include <stdio.h>

int four(void)
{
	int num1, num2;
	printf("두개의 정수를 입력:");
	scanf_s("%d %d", &num1, &num2);
	printf("몫:%d ,나머지 %d \n",num1/num2, num1%num2);
	
}