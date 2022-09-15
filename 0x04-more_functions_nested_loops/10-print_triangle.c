#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int s, x;

	if (size > 0)
	{
		for (s = 1; s <= size; s++)
		{
			for (x = size - s; x > 0; x--)
				_putchar(' ');

			for (x = 0; x < s; x++)
				_putchar('#');

			if (s == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
