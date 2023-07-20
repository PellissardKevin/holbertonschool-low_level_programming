#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * pchar - print a char
 * @ap: list of argument to print
*/
void pchar (va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * pint - print a int
 * @ap: list of argument to print
*/
void pint (va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * pfloat - print a float
 * @ap: list of argument to print
*/
void pfloat (va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * pstring - print a string
 * @ap: list of argument to print
*/
void pstring (va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		{
			printf("(nil)");
			return;
		}
	printf("%s", s);
}

/**
 * print_all - print anything in parameters
 * @format: type of format
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *s = "";

	form_t form[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (form[j].format_print)
		{
			if (format[i] == form[j].format_print[0])
			{
				printf("%s", s);
				form[j].func(ap);
				s = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
