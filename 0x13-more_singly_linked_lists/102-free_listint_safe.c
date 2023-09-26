#include "lists.h"

/**
 * free_listint_safe -  a function that frees a list
 * @h: double ointer head of list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *nd, *temp;
	size_t x;

	if (*h == NULL)
	{
		return (0);
	}

	nd = *h;
	for (x = 0; nd != NULL; x++)
	{
		temp = nd;
		nd = nd->next;
		free(temp);
		if (temp <= nd)
		{
			*h = NULL;
			break;
		}
	}
	return (x);
}
