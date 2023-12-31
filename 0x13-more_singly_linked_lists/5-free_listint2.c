#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: double pointer head
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *nd, *temp;

	if (head == NULL)
	{
		return;
	}

	nd = *head;
	while (nd != NULL)
	{
		temp = nd;
		nd = nd->next;
		free(temp);
	}
	*head = NULL;
}
