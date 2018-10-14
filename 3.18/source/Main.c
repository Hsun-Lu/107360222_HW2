#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	printf("請輸入銷售額：");
	scanf_s("%f", &a);
	printf("薪水為%.2f元\n", a*0.09 + 200);
	system("pause");
	return 0;
}