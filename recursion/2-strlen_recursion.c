#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string source
 * return: int
 */
int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}

	return (i);
}
