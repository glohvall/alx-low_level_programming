#include <stdio.h>
#include <stdlib.h>

/**
 *description = main-print digits
 *Return: 0 if success
 */

int main(void)
{
	int base;

	for (base = 0; base <= 9; base++)
		printf("%d", base);
	printf("\n");
	return (0);
}
