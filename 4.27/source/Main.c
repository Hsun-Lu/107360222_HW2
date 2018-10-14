#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("請輸入三角形之三邊長(整數)：");
	scanf_s("%d %d %d",&a, &b, &c);
	if (((a*a) + (b*b) == (c*c)) || ((a*a) + (c*c) == (b*b)) || ((b*b) + (c*c) == (a*a)))
	{
		printf("此三角形為直角三角形\n");
	}
	else if (((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))
	{
		printf("此非三角形\n");
	}
	else
	{
		printf("此三角形非直角三角形\n");
	}
	system("pause");
	return 0;
}