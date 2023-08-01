#include "lists.h"
/**
 * dlistint_len - sized a list
 *
 * @h: elements
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
		int size = 0;
	const dlistint_t *p = h;

	while (p != NULL)
	{
		if (p->n == 0)
		{
			p = p->next;
			size++;
		}
		else
		{
			p = p->next;
			size++;
		}
	}

	return (size);
}
