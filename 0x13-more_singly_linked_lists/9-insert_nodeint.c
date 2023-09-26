#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: double pointer head
 * @idx: unsigned integer variable insert new node
 * @n: integer variable
 * Return: return the address of the new node, otherwise return NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *add_new;
	unsigned int x = 0;

	add_new = malloc(sizeof(listint_t));
	if (head == NULL || add_new == NULL)
	{
		return (NULL);
	}
	add_new->n = n;
	add_new->next = NULL;
	if (idx == 0)
	{
		add_new->next = *head;
		*head = add_new;
		return (add_new);
	}
	nd = *head;
	while (nd != NULL)
	{
		if (x == idx - 1)
		{
			add_new->next = nd->next;
			nd->next = add_new;
			return (add_new);
		}
		nd = nd->next;
		x++;
	}
	free(add_new);
	return (NULL);
}
