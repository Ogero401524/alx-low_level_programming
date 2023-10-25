#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: Integer value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *_new_node, *carrent = *head;
	unsigned int i = 0;

	_new_node = malloc(sizeof(listint_t));
	if (_new_node == NULL)
		return (NULL);

	_new_node->n = n;

	if (idx == 0)
	{
		_new_node->next = carrent;
		*head = _new_node;
		return (_new_node);
	}

	while (carrent != NULL)
	{
		if (i == idx - 1)
		{
			_new_node->next = carrent->next;
			carrent->next = _new_node;
			return (_new_node);
		}
		carrent = carrent->next;
		i++;
	}

	free(_new_node);
	return (NULL);
}
