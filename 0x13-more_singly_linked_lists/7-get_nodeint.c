#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: pointer head
 * @index: unsigned integer variable of node
 * Return: if the node doesnot exist return NULL otherwise returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd;
	unsigned int num;

	nd = head;
	num = 0;
	while (nd != NULL)
	{
		if (num == index)
		{
			return (nd);
		}
		nd = nd->next;
		num++;
	}
	return (NULL);
}
