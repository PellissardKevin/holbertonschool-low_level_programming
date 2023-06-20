#include "main.h"

/**
 * _islower - return 1 if c is lower
 * @c: c an integer
 * Return: 1 when c is lower
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
}
