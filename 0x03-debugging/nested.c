#include <stdio.h>

/**
 *description: main - trying out loops
 *Return: 0 if success
 */

int main(void)
{
	int i = 0, j;

	while (i < 5)
	{
		j = 0;
		while (j <= 5)
		{
			printf("%d ", i * j);
			j++;
		}

		printf("\n");
		i++;
	}
	return (0);
}
