#include "lists.h"
/**
 * free_list - freed a list
 *
 * @head: elements of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	
	if (head == NULL)
	{
		free(tmp);
		return;
	}
}
