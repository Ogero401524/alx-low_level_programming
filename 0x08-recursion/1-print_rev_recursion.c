#include "main.h"
/**
 *_print_rev_recursion - Entry point
 *@s: string
 *Return :null
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
