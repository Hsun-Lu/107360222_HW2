#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d ,e;
	printf("請輸入帳號：");
	scanf_s("%d", &a);
	printf("請輸入月初餘額：");
	scanf_s("%f", &b);
	printf("請輸入本月消費：");
	scanf_s("%f", &c);
	printf("請輸入本月借款：");
	scanf_s("%f", &d);
	printf("請輸入信用額度：");
	scanf_s("%f", &e);
	printf("\n帳號：%d\n", a);
	printf("信用額度：%.2f\n", e);
	printf("餘額：%.2f\n", b + c - d);
	if (b + c - d > e)
	{
		printf("信用額度超額\n");
	}
	else
	{
		printf("信用額度未超額\n");
	}
	system("pause");
	return 0;
}