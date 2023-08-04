#include "main.h"
/**
 * print_binary - print number in binary
 *
 * @n: number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int i = 31, mask = (1 << i);

	for (; (n >> i) == 0 && (i > 0); i--)
		mask = (1 << i);


	for (; i >= 0; i--)
	{
		mask = (1 << i);

		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
