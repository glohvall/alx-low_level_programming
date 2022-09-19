#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: pointer
 *Return: o
 */

void rev_string(char *s)
{
	int i = 0;
	int len;
	char **rev_str = &s;

	len = _strlen(s);

	while (len >= i)
	{
		len--;
		**(rev_str + i) = (*(s + len));
		i++;
	}
}
