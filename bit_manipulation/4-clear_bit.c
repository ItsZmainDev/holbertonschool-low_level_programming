#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the unsigned long integer to modify
 * @index: index of the bit to set (start from 0)
 *
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
