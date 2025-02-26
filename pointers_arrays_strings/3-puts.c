#include "main.h"

/**
 * _puts - Prints a string to the strandard output followed by a new line
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
