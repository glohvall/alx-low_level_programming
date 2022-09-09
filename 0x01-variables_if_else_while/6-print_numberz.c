#include <stdio.h>
#include <stdlib.h>

/**
 *description = main- print single digits
 *Return: 0 if success
 */

int main(void)
{
	int dgt;

	for (dgt = 48; dgt <= 57; dgt++)
		putchar(dgt);
	putchar('\n');
	return (0);
}
