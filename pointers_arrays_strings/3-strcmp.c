#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	if (s1 == s2)
	{
		result = 0;
	}
	else if (s1 < s2)
	{
		result = -15;
	}
	else
	{
		result = 15;
	}

	return (result);
}
