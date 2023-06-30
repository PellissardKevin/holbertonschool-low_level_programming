#include "main.h"

/**
 * _memset - change memory with constant byte
 * @s: pointer string
 * @b: constant byte
 * @n: n bytes of memory pointed
 * Return: pointer to the memory s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i = 0;

	while (*src && i < n)
	{
		*p++ = src[i++];
	}

	return (dest);
}
