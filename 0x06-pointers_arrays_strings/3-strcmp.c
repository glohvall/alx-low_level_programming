#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: first string to compare
 *@s2: second string to compare
 *Return: result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	for (; (s1[i] == s2[i]); i++)
		if (s1[i] == '\0')
			return (0);
	result = (s1[i] - s2[i]);

	return (result);
}
