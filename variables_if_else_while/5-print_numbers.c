#include <stdio.h>

/**
 * main - Display all single digit numbers of base 10 starting 0
 *
 * Return: Always 0 (Success�)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
