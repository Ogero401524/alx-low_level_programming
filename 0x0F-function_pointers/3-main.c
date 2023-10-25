#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 for success, 98 for the wrong number of arguments, 99 for an invalid operator, 100 for division by zero
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}
