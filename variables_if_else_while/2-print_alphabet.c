#include <stdio.h>

/**
 * main - Display the alaphabet with the putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != "\0")
	{
		putchar(str[i]);
		i++;
	}

	putchar("\n");

	return (0);
}
