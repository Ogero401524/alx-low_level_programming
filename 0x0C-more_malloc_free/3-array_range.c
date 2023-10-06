#include <stdlib.h>
#include "main.h"
/**
* *array_range - Entry point
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *range;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	range = malloc(sizeof(int) * n);

	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		range[i] = min++;

	return (range);
}
