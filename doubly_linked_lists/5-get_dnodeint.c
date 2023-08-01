#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: first of list
 * @index: index to display
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *displaynode = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));
	unsigned int i;

	if (head == NULL || displaynode == NULL)
		return (0);

	for (i = 0; i < index; i++)
		head = head->next;


	displaynode->n = head->n;

	return (displaynode);
}
