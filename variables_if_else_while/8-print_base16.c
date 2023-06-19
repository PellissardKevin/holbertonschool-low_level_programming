#include <stdio.h>
#include <ctype.h>

/**
 * main - print all number of base 16 in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, x16;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (x16 = 'a'; x16 <= 'f'; x16++)
	{
		putchar(x16);
        }
	putchar('\n');

	return (0);
}
