#include <stdlib.h>
#include "lists.h"
/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the list_t list
* Return: number of elements in h
*/
size_t list_len(const list_t *h)
{
	size_t count_list_items = 0;

	while (h)
	{
		count_list_items++;
		h = h->next;
	}
	return (count_list_items);
}
