#include <stdio.h>

int Scanf_Q_Three(void)
{
	int num;
	printf("하나의 정수 입력:");
	scanf_s("%d", &num);
	printf("%d 제곱의 결과 %d: ", num, num * num);
	return 0;
}