#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @array: array of integer
 * @size: size of array
 * @action: pointer to a function
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i <= size; i++)
		action(array[i]);
}
