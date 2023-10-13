#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, n, len, k, dgit;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	k = 0;
	dgit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dgit = s[i] - '0';
			if (j % 2)
				dgit = -dgit;
			n = n * 10 + dgit;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}

	if (k == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, nm1, nm2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	result = nm1 * nm2;

	printf("%d\n", result);

	return (0);
}
