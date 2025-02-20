#include "main.h"

/**
 * print_alphabet - Prints Alphabet
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

/**
 * print_alphabet_x10 - Prints Alphabet with alphabet function
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
