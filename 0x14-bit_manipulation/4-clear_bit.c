#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (0 is the rightmost bit).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	_mask = 1UL << index;

	*n = *n & (~_mask);

	return (1);
}
