#include "main.h"

/**
 *reverse_array - reverse integers
 *@a: name of variable whose data is to be reversed
 *@n: number of elements in array
 *Return: 0 if success
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n -= 1;

	while (i < n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}

}
