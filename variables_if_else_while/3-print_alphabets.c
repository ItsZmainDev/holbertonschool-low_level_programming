#include <stdio.h>

/**
 * main - Display the alphabets with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i = 0;

	while (alphabets[i] != '\0')
	{
		putchar(alphabets[i]);
		i++;
	}

	return (0);
}
