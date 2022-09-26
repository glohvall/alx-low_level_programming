#include "main.h"

/**
 *_strchr - find character in string
 *@s: string pointer
 *@c: character to be found
 *Return: pointer to c if c is found else
 *NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}
