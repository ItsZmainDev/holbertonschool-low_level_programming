#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *search;
	
	while (*haystack)
	{
		start = haystack;
		search = needle;
		
		while (*search && *haystack == *search)
		{
			haystack++;
			search++;
		}
		
		if (!*search)
			return (start);
		
		haystack = start + 1;
	}

	return (NULL);
}
