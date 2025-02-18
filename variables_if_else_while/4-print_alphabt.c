#include <stdio.h>

/**
 * main - Display the alphabet with putchar whithout q & e letter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabt[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabt[i] != '\0')
	{
		if (alphabt[i] != 'q' && alphabt[i] != 'e')
		{
			putchar(alphabt[i]);
		}

		i++;
	}

	putchar('\n');

	return (0);
}
