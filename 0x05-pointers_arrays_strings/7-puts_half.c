#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line.
*@str: string
*
*/
void puts_half(char *str)
{
	int j = 0;
	int n;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
	    n = (j - 1) / 2;
	    n += 1;
	}
	else
	{
		n = j / 2;
	}
	for (;n < j; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
