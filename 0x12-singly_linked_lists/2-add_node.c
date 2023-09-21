#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning
 * @head: double pointer head
 * @str: fields of nodes
 * Return: the address of the new element otherwise NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new = malloc(sizeof(list_t));

	if (add_new == NULL)
	{
		return (NULL);
	}

	add_new->str = strdup(str);
	if (add_new->str == NULL)
	{
		free(add_new);
		return (NULL);
	}
	add_new->len = strlen(str);

	add_new->next = *head;
	*head = add_new;
	return (add_new);
}
