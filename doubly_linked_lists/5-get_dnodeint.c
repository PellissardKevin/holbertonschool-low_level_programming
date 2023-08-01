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
	dlistint_t *displaynode;
	unsigned int i;

	displaynode = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	if (head == NULL || displaynode == NULL)
		return (0);

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
		else
			return (0);
	}
	displaynode->n = head->n;

	return (displaynode);
}
