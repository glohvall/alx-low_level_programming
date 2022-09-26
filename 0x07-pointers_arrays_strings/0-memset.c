#include "main.h"

/**
 *_memset - function fills the first n bytes of the memory area pointed to by s
 *with the constant byte b
 *@s: pointer with address
 *@b: string to be copied
 *@n: source bytes
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
