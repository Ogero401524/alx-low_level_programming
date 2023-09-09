#include <stdio.h>

/**
*main - Entry point
*
*Return:  Always 0 (success)
*/

int main(void)
{
	char d;

	char e;

	d = 'a';
	e = 'A';
	while (d <= 'x')
	{
		putchar(d);
		d++;
	}
	while (e <= 'x')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
