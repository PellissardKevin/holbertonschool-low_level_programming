#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @n: param for number
 * Return: 0 always success
 */
int print_last_digit(int n)
{
	int abs, last;

	abs = (n*((n*2+1)%2));
	last = (abs % 10);

	_putchar('0' + last);
	return (last);
}
