#include <stdio.h>

/**
*main - Entry point
*
*Return:  Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 49; i < 59; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
