#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *@head: pointer head
 *@str: fields of nodes
 * Return: returns the address to the new element otherwise NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new = malloc(sizeof(list_t));
	list_t *node = *head;

	if (add_new == NULL)
	{
		return (NULL);
	}
	if (str)
	{
		add_new->str = strdup(str);
		if (add_new->str == NULL)
		{
			free(add_new);
			return (NULL);
		}
		add_new->len = strlen(add_new->str);
	}

	if (node != NULL)
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = add_new;
	}
	else
	{
		*head = add_new;
	}
	return (add_new);
}
