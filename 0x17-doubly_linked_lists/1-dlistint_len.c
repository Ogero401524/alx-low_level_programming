#include "lists.h"
/**

 */
size_t dlistint_len(const dlistint_t *h)
{
	int counts = 0;

	if (h == NULL)
		return (counts);
	while (h != NULL)
	{
		h = h->next;
		counts++;
	}
	return (counts);
}
