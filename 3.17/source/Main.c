#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d ,e;
	printf("�п�J�b���G");
	scanf_s("%d", &a);
	printf("�п�J���l�B�G");
	scanf_s("%f", &b);
	printf("�п�J������O�G");
	scanf_s("%f", &c);
	printf("�п�J����ɴڡG");
	scanf_s("%f", &d);
	printf("�п�J�H���B�סG");
	scanf_s("%f", &e);
	printf("\n�b���G%d\n", a);
	printf("�H���B�סG%.2f\n", e);
	printf("�l�B�G%.2f\n", b + c - d);
	if (b + c - d > e)
	{
		printf("�H���B�׶W�B\n");
	}
	else
	{
		printf("�H���B�ץ��W�B\n");
	}
	system("pause");
	return 0;
}