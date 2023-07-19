#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a string with separators
 * @separator: element separator
 * @n: n elements of string
 *
 * Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", (va_arg(ap, const char *)));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
