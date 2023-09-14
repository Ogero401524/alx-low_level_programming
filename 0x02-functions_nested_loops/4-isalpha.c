#include "main.h"
/**
 *_isalpha - checks for alphabetic character.
 *@: is the character to be checked
 *Returns 1 if c is a letter, lowercase or uppercase and 0 anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
