#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_node_end - Adds a new node at the end of a linked list
* @head: A pointer to a pointer to the head of the linked list
* @str: The string to be duplicated and added to the new node
* Return: The address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_new_node, *current_position;

	if (str == NULL)
		return (NULL);

	_new_node = (list_t *)malloc(sizeof(list_t));
	if (_new_node == NULL)
		return (NULL);

	_new_node->str = strdup(str);
	if (_new_node->str == NULL)
	{
		free(_new_node);
		return (NULL);
	}

	_new_node->len = strlen(str);
	_new_node->next = NULL;

	if (*head == NULL)
	{
		*head = _new_node;
	}
	else
	{
		current_position = *head;
		while (current_position->next)
		{
			current_position = current_position->next;
		}
		current_position->next = _new_node;
	}

	return (_new_node);
}
