#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b;
	int c;
	printf("�п�J�U�ڥ����G");
	scanf_s("%f", &a);
	printf("�п�J�Q�v�G");
	scanf_s("%f", &b);
	printf("�п�J�ѼơG");
	scanf_s("%d", &c);
	printf("�Q���O�ά�%.2f��\n", a*b*(c / 365));
	system("pause");
	return 0;
}