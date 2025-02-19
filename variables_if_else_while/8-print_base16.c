#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		putchar((i < 10) ? '0' + i : 'a' + (i - 10));
		i++;
	}

	putchar('\n');

	return (0);
}
