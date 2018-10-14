#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a = '*';
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (((i == 0) || (i==8)) && (j == 4))
			{
				printf("%c", a);
			}
			else if (((i == 1) || (i == 7)) && ((j == 3) || (j == 4) || (j == 5)))
			{
				printf("%c", a);
			}
			else if (((i == 2) || (i == 6)) && ((j == 2) || (j==3) || (j == 4) || (j == 5) || (j == 6)))
			{
				printf("%c", a);
			}
			else if (((i == 3) || (i == 5)) && ((j == 1) || (j == 2) || (j == 3) || (j == 4) || (j == 5) || (j == 6) || (j == 7)))
			{
				printf("%c", a);
			}
			else if (i == 4)
			{
				printf("%c", a);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}