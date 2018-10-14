#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a = '+';
	char b = ' ';
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if ((i == 1) && ((j == 1) || (j == 2) || (j == 3) || (j == 4) || (j == 5) || (j == 6) || (j == 7) || (j == 8) || (j == 9) || (j == 10)))
			{
				printf("%c", b);
			}
			else
			{
				printf("%c", a);
			}
		}
		printf("\n");
	}
	system("pause");
}