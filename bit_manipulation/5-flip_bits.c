#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip
 *
 * @n: number 1
 * @m: number 2
 * Return: The number of bits change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0, i;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			nb++;
	}
	return (nb);
}
