#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to change
 *
 * Return: Pointer to the string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] -= 32;
		i++;
	}

	return (str);
}
