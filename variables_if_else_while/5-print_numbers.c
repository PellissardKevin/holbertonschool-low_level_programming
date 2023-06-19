#include <stdio.h>
#include <ctype.h>

/**
 * main - Print single digit number of base 10
 * Return: 0 Always (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');

	return (0);
}
