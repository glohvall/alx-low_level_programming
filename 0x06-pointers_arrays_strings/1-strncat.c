#include "main.h"

/**
 **_strncat - concatenate two strings
 *@dest: destination file
 *@src: source file
 *@n: maximum number of bytes to be copied from source to destination
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
