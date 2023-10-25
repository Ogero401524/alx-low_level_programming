#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list with loop handling.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t _node_count = 0;
	const listint_t *carrent = head;
	unsigned int i;
	const listint_t *check[1024];

	if (head == NULL)
	{
		exit(98);
	}

	while (carrent)
	{
		for (i = 0; i < _node_count; i++)
		{
			if (carrent == check[i])
			{
				printf("-> [%p] %d\n", (void *)carrent, carrent->n);
				return (_node_count);
			}
		}

		check[_node_count] = carrent;
		printf("[%p] %d\n", (void *)carrent, carrent->n);
		_node_count++;
		carrent = carrent->next;
	}

	return (_node_count);
}
