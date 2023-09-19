#include "search_algos.h"
/**
 * jump_search - that searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search
 * Return: index of value found or -1 if fail
 */
int jump_search(int *array, size_t size, int value)
{
	int min = 0, sqr = sqrt(size), end = 0, i;


	if (array == NULL || size == 0)
		return (-1);

	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		min = end;
		end += sqr;
	}
	printf("Value found between indexes [%d] and [%d]\n", min, end);
	if (end > ((int)size - 1))
		end = size - 1;

	for (i = min; i <= end && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
