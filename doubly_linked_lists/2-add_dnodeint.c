#include "lists.h"
/**
 * add_dnodeint - add a node to the list
 *
 * @head: first element of list
 * @n: number of list
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t* new_node;

	new_node = (dlistint_t*)malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;


	if ((*head) != NULL)
		(*head)->prev = new_node;


	(*head) = new_node;

	return (new_node);
}
