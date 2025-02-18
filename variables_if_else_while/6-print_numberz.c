#include <stdio.h>

/**
 * main - Display numberz (digits 0-9)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
