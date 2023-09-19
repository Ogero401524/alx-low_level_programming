#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *
 *@s: string
 *Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (int o = i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
