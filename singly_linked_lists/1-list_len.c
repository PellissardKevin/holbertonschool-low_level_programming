#include "lists.h"

/**
 * list_len - size of list
 * @h: elements of lists
 * Return: size of list
*/
size_t list_len(const list_t *h)
{
	int size = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		if (p->str == NULL)
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
