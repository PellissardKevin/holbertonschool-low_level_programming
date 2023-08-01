#include "lists.h"
/**
 * add_node_end - add a node at the end of list
 *
 * @head: head of the list
 * @n: Data to add at the end
 * Return: a dlistint_t value
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *listdup = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));
	dlistint_t *last = *head;

	if (head == NULL || listdup == NULL)
		return (0);

	listdup->n = n;
	listdup->next = NULL;

	if (*head == NULL)
	{
		*head = listdup;
		listdup->prev = NULL;
		return (listdup);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = listdup;

	listdup->prev = last;

	return (last);
}
