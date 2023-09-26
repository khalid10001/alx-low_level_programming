#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list.
 * @head: double pointer head
 * @n: constant integer variable
 * Return: returns the address of the new element otherwise NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *nd;

	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
	{
		return (NULL);
	}

	add_new->next = NULL;
	add_new->n = n;
	if (*head == NULL)
	{
		*head = add_new;
	}
	else
	{
		nd = *head;
		while ((*nd).next != NULL)
		{
			nd = (*nd).next;
		}
		(*nd).next = add_new;
	}
	return (add_new);
}
