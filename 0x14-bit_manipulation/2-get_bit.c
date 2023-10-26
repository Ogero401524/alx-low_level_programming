#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve (0 is the rightmost bit).
 *
 * Return: The value of the bit at the given index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int _mask;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	_mask = 1UL << index;

	return ((n & _mask) ? 1 : 0);
}
