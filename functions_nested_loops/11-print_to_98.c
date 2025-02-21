#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		_putchar(n);
		for (i = n + 1; i >= 98; i--)
		{
			_putchar(',');
			_putchar(i + '0');
		}
	}
	else
	{
		_putchar(n);
		for (i = n + 1; i <= 98; i++)
		{
			_putchar(',');
			_putchar(i + '0');
		}
	}
}
