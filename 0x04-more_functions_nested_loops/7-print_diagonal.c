#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 *Return: 0
 */
void print_diagonal(int n)
{
	int c, t;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (t = 0; t < c; t++)
				_putchar(' ');
			_putchar('\\');

			if (c == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
