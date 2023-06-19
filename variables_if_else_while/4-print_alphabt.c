#include <stdio.h>
#include <ctype.h>

/**
 * main - return alphabet without e and q
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if ((x < 'E' || x > 'E') && (x < 'Q' || x > 'Q'))
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');

	return (0);
}
