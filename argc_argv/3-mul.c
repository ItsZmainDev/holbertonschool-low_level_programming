#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = argv[1] * argv[2];

	return (i);
}
