#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _diff = n ^ m;
	unsigned int _count = 0;

	while (_diff > 0)
	{
		_count += _diff & 1;
		_diff >>= 1;
	}

	return _count;
}
