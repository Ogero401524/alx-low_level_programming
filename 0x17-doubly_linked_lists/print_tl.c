#include "lists.h"
/**

 */
size_t printElements(const dlistint_t *leading)
{
	int countlist = 0;

	if (leading == NULL)
		return (countlist);
	while (leading != NULL)
	{
		printf("%d\n", leading->n);
		leading = leading->next;
		countlist++;
	}
	return (countlist);
}
