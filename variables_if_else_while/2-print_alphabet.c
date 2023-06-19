#include <ctype.h>
#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0 always Success
 */
int main(void)
{
	int x;
	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
