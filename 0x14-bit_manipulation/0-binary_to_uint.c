#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 characters representing the binary number.
 *
 * Return: The converted number, or 0 if there are invalid
 *                                   characters in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int _result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		_result = (_result * 2) + (*b - '0');
		b++;
	}

	return (_result);
}
