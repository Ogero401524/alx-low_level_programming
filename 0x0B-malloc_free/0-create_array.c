#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *_array;
	unsigned int i;

	_array = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		_array[i] = c;
	return (_array);
}
