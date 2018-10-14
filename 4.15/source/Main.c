#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b = .1;
	for (a = 0; a < 15; a ++)
	{
		printf("½Æ§Q¬°%.3f¤¸\n", 5000 * b);
		b = b + .005;
	}
	system("pause");
	return 0;
}