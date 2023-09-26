#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: double pointer head
 * Return: returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd, *nx;

	if (*head == NULL)
	{
		return (NULL);
	}

	nd = *head;
	*head = NULL;
	while (nd != NULL)
	{
		nx = nd->next;
		nd->next = *head;
		*head = nd;
		nd = nx;
	}
	return (*head);
}
