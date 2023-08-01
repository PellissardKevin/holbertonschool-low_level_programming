#include "lists.h"
/**
 * free_dlistint - freed a double linked list
 *
 * @head: head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpnext, *tmpact = head;

	while (tmpact != NULL)
	{
		tmpnext = tmpact->next;
		free(tmpact);
		tmpact = tmpnext;
	}
}
