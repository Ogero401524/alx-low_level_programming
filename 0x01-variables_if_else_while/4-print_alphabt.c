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
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
