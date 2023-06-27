#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: Integer convert
 */
int _atoi(char *s)
{
	int ret = 0, i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (!(s[i]> '9' || s[i]<'0'))
			ret = ret*10 + s[i] - '0';
	}

	return ret;
}
