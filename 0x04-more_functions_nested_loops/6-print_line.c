#include "main.h"
/**
 *print_line - give n times
 *always: return 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			continue;
		}
		_putchar(_);
	}
	_putchar('\n');
}
