#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b;
	while (1)
	{
		printf("�п�J#���u���u�@�ɼơG");
		scanf_s("%d", &a);
		printf("�п�J�u�@�@�p�ɪ��Q�v�G");
		scanf_s("%f", &b);
		if (a <= 40)
		{
			printf("�~����%.2f��\n", a*b);
		}
		else if (a > 40)
		{
			printf("�~����%.2f��\n", a*b + b * 0.5);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}