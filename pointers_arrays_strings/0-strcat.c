#include "main.h"
/**
 * _strcat - copy and cat a two string
 * @dest: string to receve cat
 * @src: source for cat
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
