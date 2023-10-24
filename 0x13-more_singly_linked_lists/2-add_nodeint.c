#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the address of the head of the list.
 * @n: Integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new_node;

	if (head == NULL)
		return (NULL);
	_new_node = malloc(sizeof(listint_t));
	if (_new_node == NULL)
		return (NULL);
	_new_node->n = n;
	_new_node->next = *head;
	*head = _new_node;


	return (_new_node);
}
