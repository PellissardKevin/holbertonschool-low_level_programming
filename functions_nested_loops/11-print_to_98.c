#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * @n: param integer
 * Return: Void
 */
void print_to_98(int n)
{
	int last, first;

	while (n < 98 || n > 98)
	{
		if (n < 98)
		{
			last = n % 10;
			if (n > 9)
			{
			first = n / 10 % 10;
			_putchar('0' + first);
			}
			if (n < 0)
			{
				last = ((n * -1) % 10);
				first = ((n * -1) / 10);
				_putchar('-');
				if (n < -9)
				{
					_putchar('0' + first);
				}
			}
			_putchar('0' + last);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		else
		{
			last = (n % 10);
			if (n > 999)
			{
				first = (n / 1000) % 10;
				_putchar('0' + first);
				first = (n / 100) % 10;
				_putchar('0' + first);
			}
			if (n > 99)
			{
				first = (n / 100) % 10;
				_putchar('0' + first);
			}
			first = (n / 10) % 10;
			_putchar('0' + first);
			_putchar('0' + last);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
