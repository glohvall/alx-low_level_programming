#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *description = main- print lowercase alphabet except e and q
 *Return: 0 if success
 */

int main(void)
{
	char alphabet = 'a';
	while alphabet <= 'z'
				  if (alphabet == 'e' || alphabet == 'q')
					  putchar(alphabet+1);
				else
					putchar(alphabet);
	putchar('\n');
	return (0);
}
