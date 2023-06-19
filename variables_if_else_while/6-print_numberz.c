#include <stdio.h>
#include <ctype.h>

/**
 * main - Print all digit number of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(48 + x);
	}
	putchar('\n');

	return (0);
}
