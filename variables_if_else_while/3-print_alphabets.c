#include <stdio.h>
#include <ctype.h>

/**
 * main -Print alphabet in lower and upper case
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
