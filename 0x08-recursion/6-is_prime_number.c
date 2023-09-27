#include "main.h"

int _prime(int n, int i);
/**
 * is_prime_number - Entry point
 * @n: int
 * _prime - second Entry point
 * @i: int
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
