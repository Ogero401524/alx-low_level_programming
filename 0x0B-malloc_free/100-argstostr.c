#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int i, j, length = 0;
	char *concatenated;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}

	concatenated = (char *)malloc(sizeof(char) * (length + 1));

	if (concatenated == NULL)
		return (NULL);

	int index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[index] = av[i][j];
			index++;
		}
		concatenated[index] = '\n';
		index++;
	}

	concatenated[length] = '\0';

	return (concatenated);
}
