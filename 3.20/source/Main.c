#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b;
	while (1)
	{
		printf("請輸入#員工之工作時數：");
		scanf_s("%d", &a);
		printf("請輸入工作一小時的利率：");
		scanf_s("%f", &b);
		if (a <= 40)
		{
			printf("薪水為%.2f元\n", a*b);
		}
		else if (a > 40)
		{
			printf("薪水為%.2f元\n", a*b + b * 0.5);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}