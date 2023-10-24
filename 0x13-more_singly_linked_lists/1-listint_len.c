#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		counts++;
		h = h->next;
	}
	return (counts);
}
