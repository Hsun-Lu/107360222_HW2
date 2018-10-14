#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	float c = 1.00;
	while (1)
	{
		printf("請輸入員工代碼(經理：1 ， 鐘點工：2 ， 傭金工：3 ， 論件計酬的工人：4)：");
		scanf_s("%d", &a);
		if (a == 1)
		{
			printf("薪水為100萬元(固定)");
		}
		else if (a == 2)
		{
			printf("請輸入工作時數：");
			scanf_s("%d", &b);
			if (b > 40)
			{
				c = c * b + .50;
				printf("薪水為%.2f萬元", c);
			}
			else
			{
				printf("薪水為%.2f萬元", c*b);
			}
		}
		else if (a == 3)
		{
			printf("薪水為%.2f萬元", (250 + .057*c)*0.1);
		}
		else if (a == 4)
		{
			printf("薪水為50萬元(本次商品)");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}