#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int _bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	_bytes = atoi(argv[1]);

	if (_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *opcodes = (unsigned char *)main;

	for (i = 0; i < _bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < _bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
