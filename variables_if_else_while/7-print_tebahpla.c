#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		putchar(tolower(x));
	}
	putchar('\n');

	return (0);
}
