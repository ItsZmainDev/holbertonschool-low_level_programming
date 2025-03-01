#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && dest--)
	{
		*start++ = *src++;
	}
	while (dest--)
	{
		*start++ = '\0';
	}
	return (start);
}
