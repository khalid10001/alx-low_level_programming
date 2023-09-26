#include "lists.h"

/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, y;
	const listint_t *nd = head, *tmp;

	for (x = 0; nd != NULL; x++)
	{
		printf("[%p] %d\n", (void *)nd, nd->n);
		nd = nd->next;
		tmp = head;

		for (y = 0; y < x; y++)
		{
			if (nd == tmp)
			{
				printf("-> [%p] %d\n", (void *)nd, nd->n);
				return (x);
			}
			tmp = tmp->next;
		}
	}
	return (x);
}
