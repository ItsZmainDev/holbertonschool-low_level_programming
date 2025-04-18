#include "main.h"

/**
 * _isdigit - Check if the character is a digit
 * @c: the character to check
 *
 * Return: 1 if is a digit or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
