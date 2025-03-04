#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j;

	while (i <= 98)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');

			putchar(' ');

			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
