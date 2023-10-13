#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Entry point
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	caunt = 0;
	while (caunt < strlen(str))

	{
		if (!isdigit(str[caunt]))
		{
			return (0);
		}

		caunt++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int caunt;
	int str_int;
	int sam = 0;

	caunt = 1;
	while (caunt < argc)
	{
		if (check_num(argv[caunt]))

		{
			str_int = atoi(argv[caunt]);
			sam += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		caunt++;
	}

	printf("%d\n", sam);
	return (0);
}