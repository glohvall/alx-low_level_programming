#include "main.h"

/**
 *_islower - print 1 for all lower case alphabets else print zero
 *@c: the character to print
 *Return: return 1 if lower case, otherwise return 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
		}
