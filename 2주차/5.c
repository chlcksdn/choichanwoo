#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char a;
	int b, c, d;
	printf("�����Է�:");
	scanf("%c", &a);
	printf("������Է�:");
	scanf("%d", &b);
	printf("������Է�:");
	scanf("%d", &c);
	printf("���м����Է�:");
	scanf("%d", &d);
	printf("����: %d", b + c + d);
	printf("\n���:%d\n", (b + c + d) / 3);
	return 0;
