#include "main.h"
#include <ctype.h>

/**
 * _islower - return 1 if c is lower
 * Return: 1 when c is lower
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
