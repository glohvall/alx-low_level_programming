#include "main.h"

/**
 **_strncpy - copies source file to destination
 *@dest: destination file
 *@src: source file
 *@n: maximum number of bytes
 *Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
