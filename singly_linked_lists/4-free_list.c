#include "lists.h"
/**
 * free_lists - freed a list
 *
 * @head: elements of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *last = head;

	if (head == NULL || last == NULL)
		return;

	free(last);

	return;
}
