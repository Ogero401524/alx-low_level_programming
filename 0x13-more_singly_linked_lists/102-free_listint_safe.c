#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list with loop handling.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *carrent = *h;
	listint_t *temp;

	if (h == NULL)
	{
		exit(98);
	}

	while (carrent != NULL)
	{
		size++;
		temp = carrent;
		carrent = carrent->next;
		free(temp);
	}

	*h = NULL;

	return (size);
}
