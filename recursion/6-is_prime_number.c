#include "main.h"

/**
 * is_prime - check if a number is prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
