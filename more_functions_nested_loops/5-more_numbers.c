#include "main.h"

/**
 * more_numbers - Display numbers 0 to 14 X 10
 */
void more_numbers(void)
{
	int i, number;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 13; number++)
		{
			if (number >= 10)
			{
				_putchar('1');
			}
			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}
