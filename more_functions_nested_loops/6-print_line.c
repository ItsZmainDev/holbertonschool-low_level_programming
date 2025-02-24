#include "main.h"

/**
 * print_line - Print lines x n
 * @n: The number
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
