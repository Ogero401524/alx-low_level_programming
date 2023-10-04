#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
		copy[i] = str[i];
	}

	return (copy);
}
