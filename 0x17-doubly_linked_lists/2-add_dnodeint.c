#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: integer value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *forceElementfirst = malloc(sizeof(dlistint_t));

	if (forceElementfirst)
		return (NULL);

	forceElementfirst->n = n;
	forceElementfirst->next = *head;
	forceElementfirst->prev = NULL;

	if (*head != NULL)
		(*head)->prev = forceElementfirst;

	*head = forceElementfirst;

	return (forceElementfirst);
}
