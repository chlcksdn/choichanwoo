#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char a;
	int b, c, d;
	printf("학점입력:");
	scanf("%c", &a);
	printf("국어성적입력:");
	scanf("%d", &b);
	printf("영어성적입력:");
	scanf("%d", &c);
	printf("수학성적입력:");
	scanf("%d", &d);
	printf("총점: %d", b + c + d);
	printf("\n평균:%d\n", (b + c + d) / 3);
	return 0;
