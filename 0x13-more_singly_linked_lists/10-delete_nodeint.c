#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a
 * listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *carrent, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	carrent = *head;
	while (carrent != NULL)
	{
		if (i == index - 1)
		{
			if (carrent->next != NULL)
			{
				temp = carrent->next;
				carrent->next = temp->next;
				free(temp);
				return (1);
			}
			else
				return (-1);
		}
		carrent = carrent->next;
		i++;
	}
	return (-1);
}
