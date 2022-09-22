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
		return (0);

	/*for (; (s1[i] != s2[i]); i++)*/
		result = (s1[i] - s2[i]);

	return (result);
}
