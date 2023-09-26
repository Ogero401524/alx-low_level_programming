#include "main.h"
#include <stdio.h>
/**
*print_diagsums - Entry point
*@a: input
*@size: input
*Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int sam1, sam2, i;

	sam1 = 0;
	sam2 = 0;

	for (i = 0; i < size; i++)
	{
		sam1 = sam1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sam2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sam1, sam2);
}
