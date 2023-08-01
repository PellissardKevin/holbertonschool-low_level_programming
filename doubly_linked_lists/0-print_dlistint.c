#include "lists.h"
/**
 * print_dlistint - print a double linked list
 * @h: elements of list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;
	const dlistint_t *p = h;

	while (p != NULL)
	{
		if (p->n == 0)
		{
			printf("[0] (nil)\n");
			p = p->next;
			size++;
		}
		else
		{
			printf("%d\n", p->n);
			p = p->next;
			size++;
		}
	}

	return (size);
}
