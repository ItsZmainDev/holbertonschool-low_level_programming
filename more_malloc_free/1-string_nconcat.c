#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
