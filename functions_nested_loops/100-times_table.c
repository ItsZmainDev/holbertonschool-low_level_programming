#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i * j + '0');

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
