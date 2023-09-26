#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: double pointer head
 * Return: if the linked list is empty return 0 otherwise returns
 *		the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *nd;
	int num;

	if (*head != NULL)
	{
		return (0);
	}

	nd = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(nd);
	return (num);
}
