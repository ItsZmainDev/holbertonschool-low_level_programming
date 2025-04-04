#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to the string
 */
char *cap_string(char *str)
{
	int i = 0, cap_next = 1;

	while (str[i] != '\0')
	{
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}

		cap_next = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1;
		}

		i++;
	}

	return (str);
}
