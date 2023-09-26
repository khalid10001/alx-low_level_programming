#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the beginning of a list.
 * @head - double pointer head
 * @n: constant integer variable
 * Return: returns the address of the new element otherwise NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new;

	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);

	add_new->n = n;
	add_new->next = *head;

	*head = add_new;

	return (add_new);
}
