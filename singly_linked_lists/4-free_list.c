#include "lists.h"
/**
 * free_list - freed a list
 *
 * @head: elements of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmpnext, *tmpact = head;

	while (tmpact != NULL)
	{
		tmpnext = tmpact->next;
		free(tmpact->str);
		free(tmpact);
		tmpact = tmpnext;
	}
}
