#include "main.h"
/**
 * clear_bit - set value to 0 at the index
 *
 * @n: the number in binary
 * @index: the index
 * Return: the bit value set to 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
	return (-1);

	*n |= (1 << index);
	return (0);
}
