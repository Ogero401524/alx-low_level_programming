#include <search_algos.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (int i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		int mid = low + (high - low) / 2;

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}
