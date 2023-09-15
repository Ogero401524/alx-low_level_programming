#include "main.h"
/**
 *0-isupper -
 *checks for uppercase character
 *Returns 1 if c is uppercase, zero otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
