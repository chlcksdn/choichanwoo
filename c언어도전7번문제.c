#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int h, m, s;
	printf("�ʸ��Է��Ͻÿ�:");
	scanf("%d", &s);
	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;
	printf("[h:%d,m:%d,s:%d]\n", h, m, s);
	return 0;
}