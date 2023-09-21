#include "lists.h"

/**
 * print_list -  a function that prints all the elements of a list_t list
 * @h: pointer head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if ((*current).str != NULL)
		{
			printf("[%d] %s\n", (*current).len, (*current).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		current = (*current).next;
	}
	return (i);
}
