#include <stdio.h>
int main(void)
{
	for (int z = 2; z <= 9; z++)
	{
		printf("%d´Ü \n", z);
		for (int x = 2; x <= 9; x++)
		{
			for (int y = 1; y <= 9; y++)
			{
				printf("%d x %d = %d \n", x, y, x * y);
			}
			printf("\n");
		}
	}
}