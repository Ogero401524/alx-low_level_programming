#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: int a to be swaped
 *@b: int b to be swaped
 *return: a and b
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
