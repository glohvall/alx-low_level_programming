#include "main.h"

/**
 **string_toupper - print capital alphabet
 *Return: 0 if success
 *@str: pointer to address
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
