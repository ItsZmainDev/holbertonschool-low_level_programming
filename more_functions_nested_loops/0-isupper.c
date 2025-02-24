#include "main.h"

/**
 * _isupper - Check the uppercase character
 * @c: the character to check
 *
 * Return: 1 if c is upper or 0
 */
int _isupper(int c)
{
	if (c >= 32 || c <= 126)
	{
		return (1);
	}
	return (0);
}
