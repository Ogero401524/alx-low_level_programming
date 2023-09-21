#include "main.h"
/**
*print_diagonal - function that draws a diagonal line on the terminal.
*@n: number of times to be printed
*return: 0
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= o)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('\\');
		}
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\n');

	}
}
