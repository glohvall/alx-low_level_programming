#include "main.h"

/**
 *print_sign - print positives and negatives of n
 *Return: 1 if positive, -1 if negative. 0 if zero
 *@n: output integers
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
			}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
