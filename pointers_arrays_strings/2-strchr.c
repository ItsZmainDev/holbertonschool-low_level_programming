#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: A pointer to the string to be searched
 * @c: The character to be located
 *
 * Return: If a match is found - a pointer to the first occurrence
 *         of the character in the string s.
 *         If the character is not found - NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
