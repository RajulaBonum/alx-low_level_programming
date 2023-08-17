#include <stdio.h>
#include <lists.h>

/*
 * add node to a list
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newl;
	list_t *pam;
	list_t first = {strdup(str), sizeof(str), NULL};
	
	pam = &first;
	head = pam;
	
	newl = malloc(sizeof(list_t));
	newl->str = strdup(str);
	newl->len = sizeof(str);
	newl->next = head;
	head = newl;
	return newl;
}

