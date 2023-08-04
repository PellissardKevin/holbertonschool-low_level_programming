#include "main.h"
/**
 * print_binary - print number in binary
 *
 * @n: number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');

		n >>= 1;
	}
}
