/*10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 작성*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%x", n);
	return 0;
}