#include "main.h"
/**
 *main - entry
 *checks for uppercase character
 *Returns 1 if c is uppercase, zero otherwise
 */
int _isupper(int c)
{
	c = 'A';
	if ('A' <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
