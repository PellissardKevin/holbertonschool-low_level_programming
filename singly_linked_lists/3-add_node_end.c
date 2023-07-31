#include "lists.h"
/**
 * add_node_end - add a node at the end of list
 *
 * @head: head of the list
 * @str: string to add at the end
 * Return: a list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *listdup = (struct lists *) malloc(sizeof(struct lists));
	list_t *last = *head;

	if (head == NULL || listdup == NULL)
		return (0);

	listdup->str = strdup(str);
	listdup->len = strlen(str);
	listdup->next = NULL;

	if (*head == NULL)
	{
		*head = listdup;
		return (listdup);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = listdup;

	return (last);
}
