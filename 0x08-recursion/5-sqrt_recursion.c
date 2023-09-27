#include "main.h"

int l_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Entry point
 * @n: int
 *@i :int
 * Return: _sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (l_sqrt_recursion(n, 0));
}

/**
 * l_sqrt_recursion - Entry point
 * @n: int
 * @i: iterator
 *
 * Return:square root
 */
int l_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (l_sqrt_recursion(n, i + 1));
}
