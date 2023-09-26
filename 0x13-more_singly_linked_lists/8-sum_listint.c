#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data of linked list
 * @head: pointer head
 * Return: if the list is empty return 0 otherwise return sum of all the data
 */
int sum_listint(listint_t *head)
{
	size_t s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
