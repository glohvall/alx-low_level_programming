#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *description = main- print alphabet
 *Return: 0 if success
 */

int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
		putchar(ALPHABET);
	putchar('\n');
	return (0);
}
