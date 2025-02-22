#include "main.h"

/**
 * print_number - prints a number with the correct formatting
 * @num: the number to print
 *
 * Return: void
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_line - prints a single line of the times table
 * @i: the current row
 * @n: the number of times table to print
 *
 * Return: void
 */
void print_line(int i, int n)
{
	int j, result;

	for (j = 0; j <= n; j++)
	{
		result = i * j;

		if (j == 0)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			print_number(result);
			}
	}
	_putchar('\n');
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		print_line(i, n);
	}
}
