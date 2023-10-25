#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head of the list.
 * @n: Integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new_node;
	listint_t *carrent;

	if (head == NULL)
		return (NULL);

	_new_node = malloc(sizeof(listint_t));
	if (_new_node == NULL)
		return (NULL);

	_new_node->n = n;
	_new_node->next = NULL;

	if (*head == NULL)
	{
		*head = _new_node;
	}
	else
	{
		carrent = *head;
		while (carrent->next != NULL)
		{
			carrent = carrent->next;
		}
		carrent->next = _new_node;
	}

	return (_new_node);
}
