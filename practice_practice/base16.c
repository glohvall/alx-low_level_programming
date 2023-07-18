#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * descriprion = main - print numbers to the base of 16
 * Return: 0 if success
 */

int main(void)
{
	int s;
	for (s = 48; s <= 57; s++)
		putchar (s);
	for (s = 97; s <= 102; s++)
		putchar (s);

	putchar ('\n');

	return (0);
}
