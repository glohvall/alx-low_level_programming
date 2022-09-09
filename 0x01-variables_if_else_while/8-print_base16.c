#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *description = main- print alphabet
 *Return: 0 if success
 */

int main(void)
{
	int al;

	for (al = 48 ; al <= 57; al++)
		putchar(al);
	for (al = 97; al <= 102; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
