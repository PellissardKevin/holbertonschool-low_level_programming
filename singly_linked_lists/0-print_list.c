#include "lists.h"
/**
 * print_list - print a list hen she's not empty
 * @h: elements of list
 * Return: size of the list
*/
size_t print_list(const list_t *h)
{
	int size = 0;
	const list_t *p = h;

	if (p->str == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while(p != NULL)
	{
		printf("[%d] %s\n",p->len, p->str);
		p = p->next;
		size++;
	}

	return (size);
}
