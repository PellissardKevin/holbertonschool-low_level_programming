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
	dlistint_t *tmp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free((*head));
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (tmp != NULL)
				tmp = tmp->next;
			else
				return (-1);
		}

		if (tmp->next != NULL && tmp->prev != NULL)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
		}

		if (tmp->next == NULL)
			tmp->prev->next = NULL;

		if (tmp->prev == NULL)
			tmp->next->prev = NULL;

	}

	return (1);
}
