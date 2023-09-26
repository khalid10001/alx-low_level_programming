#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index of list
 * @head: double pointer head
 * @index: unsigned integer variable to delete
 * Return: returns 1 if it succeeded otherwise returns -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nd, *prev_nd;
	unsigned int x;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		nd = *head;
		*head = (*head)->next;
		free(nd);
		return (1);
	}
	nd = *head;
	for (x = 0; nd != NULL; x++)
	{
		if (x == index)
		{
			prev_nd->next = nd->next;
			free(nd);
			return (-1);
		}
		prev_nd = nd;
		nd = nd->next;
	}
	return (-1);
}
