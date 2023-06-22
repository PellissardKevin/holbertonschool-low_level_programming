#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int x, y, first, last;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			last = y % 10;
			if (y >= 10)
			{
				first = y / 10 % 10;
				_putchar('0' + first);
			}
			_putchar('0' + last);
		}
		_putchar('\n');
	}
}
