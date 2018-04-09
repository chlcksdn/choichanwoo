#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b;
	printf("****사각형의 넓이구하기****\n\n");
	printf("너비 입력: ");
	scanf("%d", &a);
	printf("높이 입력: ");
	scanf("%d", &b);
	printf("넓이 = %d\n", a*b);
	return 0;
}