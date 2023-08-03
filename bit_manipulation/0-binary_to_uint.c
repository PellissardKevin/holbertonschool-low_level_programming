#include "main.h"
/**
 * binary_to_uint - convert binay to int
 *
 * @b: int to convert
 * Return: return an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
			conv *= 2;

		else if (*b == '1')
			conv = (conv * 2) + 1;

		else
			return (0);

		b++;
	}

	return (conv);
}
