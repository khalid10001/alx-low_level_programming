#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: pointer Head node
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (x);
}
