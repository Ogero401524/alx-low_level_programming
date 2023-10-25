#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *carrent = head;

	while (carrent != NULL && i < index)
	{
		carrent = carrent->next;
		i++;
	}
	return ((i == index) ? carrent : NULL);
}
