#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: pointer head
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *nd;

	while (head != NULL)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
