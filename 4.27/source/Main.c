#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("�п�J�T���Τ��T���(���)�G");
	scanf_s("%d %d %d",&a, &b, &c);
	if (((a*a) + (b*b) == (c*c)) || ((a*a) + (c*c) == (b*b)) || ((b*b) + (c*c) == (a*a)))
	{
		printf("���T���ά������T����\n");
	}
	else if (((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))
	{
		printf("���D�T����\n");
	}
	else
	{
		printf("���T���ΫD�����T����\n");
	}
	system("pause");
	return 0;
}