#include "main.h"

/**
 * jack_bauer - print everdy minute of day
 * Return: void
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w < 3; w++)
	{
		for (x = 0; x < 10; x++)
		{
			if (((w <= 1) && (x < 10)) || ((w <= 2) && (x < 4)))
			{
				for (y = 0; y < 6; y++)
				{
					for (z = 0; z < 10; z++)
					{
						_putchar('0' + w);
						_putchar('0' + x);
						_putchar(':');
						_putchar('0' + y);
						_putchar('0' + z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
