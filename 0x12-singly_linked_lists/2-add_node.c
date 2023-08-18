#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * add node to a list
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newl;

	newl = malloc(sizeof(list_t));
	newl->str = strdup(str);
	newl->len = strlen(str);
	newl->next = *head;
	*head = newl;

	return newl;
}

