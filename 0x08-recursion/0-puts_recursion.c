#include "main.h"
/**
 *_puts_recursion - Entry point
 *@s: string
 *Return: null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
	_putchar(*s);
	s++;
}
