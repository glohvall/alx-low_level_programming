#include "main.h"

/**
 *_isalpha - print both lower case and upper case alphabets else print zero
 *@c: the character to print
 *Return: return 1 if lower case, otherwise return 0
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		|| (c >= 65 && <= 90)
		return (1);
	else
		return (0);
}
