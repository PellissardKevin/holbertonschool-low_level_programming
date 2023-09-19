#include "search_algos.h"
/**
 * binary_search - that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search
 * Return: The index of value found or -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	int Left = 0, Right = size - 1, m, i;

	if (!array)
		return (-1);

	while (Left <= Right)
	{
		printf("Searching in array: ");
		for (i = Left; i < Right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = floor((Left + Right) / 2);
		if (array[m] < value)
			Left = m + 1;
		else if (array[m] > value)
			Right = m - 1;
		else
			return (m);
	}
	return (-1);
}
