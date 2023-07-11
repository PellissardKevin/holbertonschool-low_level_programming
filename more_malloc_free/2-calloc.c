#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory set to zero
 * @nmemb: number of elements
 * @size: the size of the memory
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr != NULL)
		for (i = 0; i < size; i++)
			ptr[i] = 0;

	return (ptr);
}
