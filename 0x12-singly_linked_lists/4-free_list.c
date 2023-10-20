#include <stdlib.h>
#include "lists.h"
/**
* free_list - Frees a list_t linked list
* @head: A pointer to the head of the linked list
*/
void free_list(list_t *head)
{
    list_t *current_pos, *temp;

    while (head)
    {
	    current_pos = head;
	    temp = current_pos->next;

	    free(current_pos->str);
	    free(current_pos);
	    head = temp;
    }
}
