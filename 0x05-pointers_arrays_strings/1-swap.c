#include "main.h"

/**
 *swap_int - swap values in addresses
 *@a: pointer to address *a
 *@b: pointer to address *b
 *Return: 0 if success
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

		*b = i;
		*a = j;
}
