#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: A pointer to the string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, j, match;

	for (i = 0; s[i]; i++)
	{
		match = 0;

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				match = 1;
			}
		}

		if (match == 0)
		{
			break;
		}
	}

	return (bytes);
}
