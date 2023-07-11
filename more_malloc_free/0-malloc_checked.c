0;10;1c0;10;1c#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: int to check
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
