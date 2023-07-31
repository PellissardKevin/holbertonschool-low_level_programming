
#include "lists.h"
/**
 * add_node - add a node of a list
 * @head: start of the list
 * @str: strings to add to the list
 * Return: size of string added
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *listdup = (struct lists *) malloc(sizeof(struct lists));

	if (head == NULL || listdup == NULL)
		return (0);

	listdup->str = strdup(str);
	listdup->len = strlen(str);
	listdup->next = *head;

	*head = listdup;

	return (listdup);
}
