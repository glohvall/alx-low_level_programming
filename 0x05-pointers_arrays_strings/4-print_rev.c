#include "main.h"

/**
 *print_rev - prints a string in reverse followed by a new line
 *@s: pointer to string address
 *Return: 0
 */

void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);
}
