#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j;

	while (i < 9)
	{
		j = i + 1;

		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
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
