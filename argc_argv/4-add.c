#include <stdio.h>

/**
 * is_digit - checks if a string is a digit
 * @s: string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result;

	for (i = 1; i <= argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result)

	return (0);
}
