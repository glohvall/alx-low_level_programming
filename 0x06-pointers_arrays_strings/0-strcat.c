#include "main.h"

/**
 * *_strcat - appends the strig in *src into *dest
 *@dest: destination variable
 *@src: source variable
 *Return: destination variable
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	while (dest[len_dest])
	{
		len_dest++;
	}
	for (; src[len_src] != '\0' ;)
	{
		dest[len_dest++] = src[len_src++];
	}
	dest[len_dest] = '\0';

	return (dest);
}
