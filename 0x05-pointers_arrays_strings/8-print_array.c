#include "main.h"
/**
 *print_array - prints n elements of an array of integers, followed by a
 *new line
 *@a :array name
 *@n: array element
 *Return: a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <(n - 1); i++)
	{
		_putchar("%d,", a[i]);
	}
	if (i == (n - 1))
	{
		_putchar("%d,", a[n -1]);
	}
	_putchar('\n');
}
