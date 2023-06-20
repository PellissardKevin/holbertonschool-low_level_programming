#include "main.h"

/**
 * print_alphabetx10 - print 10 times the alphabet
 * Return: O when success
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
