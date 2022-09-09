#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *description = main- print alphabet
 *Return: 0 if success
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	putchar('\n');
	return (0);
}
