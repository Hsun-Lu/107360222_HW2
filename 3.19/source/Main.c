#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b;
	int c;
	printf("請輸入貸款本金：");
	scanf_s("%f", &a);
	printf("請輸入利率：");
	scanf_s("%f", &b);
	printf("請輸入天數：");
	scanf_s("%d", &c);
	printf("利息費用為%.2f元\n", a*b*(c / 365));
	system("pause");
	return 0;
}