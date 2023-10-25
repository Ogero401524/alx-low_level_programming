#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Returns: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *_prev = NULL;
    listint_t *next;

    while (*head != NULL)
    {
        next = (*head)->next;
        (*head)->next = _prev;
        _prev = *head;
        *head = next;
    }

    *head = _prev;
    return *head;
}
