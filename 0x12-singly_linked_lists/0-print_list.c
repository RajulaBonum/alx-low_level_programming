#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;
	if (h != NULL)
	{
		list_t *temp = (list_t *)h;
		while (temp != NULL)
		{
			if (temp->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", temp->len, temp->str);
			}
			temp = temp->next;
			i++;
		}
	}
	else
	{
		printf("The list is empty\n");
		return (1);
	}
	return i;
}
