#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, m,i;
	printf("정수1을 입력하시오: ");
	scanf("%d", &n);
	printf("정수2을 입력하시오: ");
	scanf("%d", &m);
	if (n > m)
	{
		for (m = m; n >= m; m++) {
			for (i = 1; i < 10; i++) {
				printf("%d %d는 %d\n", m, i, m*i);
			}
		}
	}
	else
	{
		for (n = n; n <= m; n++) {
			for (i = 1; i < 10; i++) {
				printf("%d %d는 %d\n", n, i, n*i);
			}
		}
	}
	return 0;
}