#include "lists.h"

/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nd;
	const listint_t *lp_nd;
	size_t x = 0;

	nd = head;
	while (nd != NULL)
	{
		if (x > 0 && nd == lp_nd)
		{
			printf("-> [%p] %d\n", (void *)nd, nd->n);
			break;
		}

		printf("[%p] %d\n", (void *)nd, nd->n);
		x++;

		if (nd->next >= nd)
		lp_nd = nd->next;

		nd = nd->next;
	}
	return (x);
}
