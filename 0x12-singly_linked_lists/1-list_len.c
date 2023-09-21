#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *	in a linked list_t list.
 * @h: pointer head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = (*h).next;
		x++;
	}
	return (x);
}
