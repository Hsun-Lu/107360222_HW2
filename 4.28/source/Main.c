#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	float c = 1.00;
	while (1)
	{
		printf("�п�J���u�N�X(�g�z�G1 �A ���I�u�G2 �A �Ī��u�G3 �A �ץ�p�S���u�H�G4)�G");
		scanf_s("%d", &a);
		if (a == 1)
		{
			printf("�~����100�U��(�T�w)");
		}
		else if (a == 2)
		{
			printf("�п�J�u�@�ɼơG");
			scanf_s("%d", &b);
			if (b > 40)
			{
				c = c * b + .50;
				printf("�~����%.2f�U��", c);
			}
			else
			{
				printf("�~����%.2f�U��", c*b);
			}
		}
		else if (a == 3)
		{
			printf("�~����%.2f�U��", (250 + .057*c)*0.1);
		}
		else if (a == 4)
		{
			printf("�~����50�U��(�����ӫ~)");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}