#include "main.h"
/**
 * get_bit - Get the bit object
 *
 * @n: number to convert
 * @index: index to use
 * Return: the number at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) >> index);
}
