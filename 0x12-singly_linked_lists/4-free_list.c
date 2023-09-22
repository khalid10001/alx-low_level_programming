#include "lists.h"

/**
 *free_list - a function that frees a list
 *@head: A pointer head
 *
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
