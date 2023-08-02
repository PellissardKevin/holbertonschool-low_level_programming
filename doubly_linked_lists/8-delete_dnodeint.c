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
	dlistint_t *displaynode, *tmp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (-1);
	}

	if (tmp->next != NULL)
	{
		displaynode = tmp->next;
		displaynode->prev = tmp->prev->prev;
	}

	tmp->next = tmp->next->next;

	displaynode->next = NULL;
	free(displaynode);

	return (1);
}
