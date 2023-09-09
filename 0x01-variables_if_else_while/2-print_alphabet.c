#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return:  Always 0 (success)
*/
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'y')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
