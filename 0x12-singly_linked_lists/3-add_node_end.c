#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * funcion to add  node at the end
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return new_node;
}
