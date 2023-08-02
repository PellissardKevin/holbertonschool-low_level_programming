#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at the index
 *
 * @head: head of the list
 * @index: index to find the node
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *displaynode, *tmp;
	unsigned int i;

	displaynode = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	if (*head == NULL || displaynode == NULL)
		return (0);

	tmp = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
		{
			return (-1);
		}
	}

	displaynode = tmp->next;

	tmp->next = tmp->next->next;

	displaynode->next = NULL;
	free(displaynode);

	return (1);
}
