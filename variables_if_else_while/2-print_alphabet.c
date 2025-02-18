#include <stdio.h>

/**
 * main - Display the alaphabet with the putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
