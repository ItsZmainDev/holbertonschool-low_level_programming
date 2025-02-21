#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j, k;

	while (i < 8)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
