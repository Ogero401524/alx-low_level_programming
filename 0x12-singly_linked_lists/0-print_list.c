#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print the elements of a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 * If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
