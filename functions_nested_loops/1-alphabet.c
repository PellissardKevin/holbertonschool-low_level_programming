#include "main.h"

/**
 * print_alphabet - print alphabet
 * return: 0
 */
int print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
