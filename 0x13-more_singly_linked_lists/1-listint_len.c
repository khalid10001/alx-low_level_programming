#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked list
 * @h: pointer head node
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = (*h).next;
	}
	return (x);
}
