#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *it will use at most n bytes from src
 *@n: input
 *@src: input value
 *@dest: input
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
