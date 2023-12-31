#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main()
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {3, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof (dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}

	new->n = 95;

	head->prev = new;
	new->next = head;
	new->prev = NULL;

	head = new;
	n = printElements(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
