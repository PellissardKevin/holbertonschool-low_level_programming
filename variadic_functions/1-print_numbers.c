#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print all numbers in param follow by new line
 * @separator: separator
 * @n: number params
 *
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
	return;
}
