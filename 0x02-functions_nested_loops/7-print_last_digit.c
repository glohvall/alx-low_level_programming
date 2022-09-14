#include "main.h"

/**
 *print_last_digit - print last digit
 *@g: integer
 *Return: return last digit
 */

int print_last_digit(int g)
{
	int i = g % 10;
		if (i < 0)
			i *= -1;

		_putchar(i + '0');

		return (i);
}
