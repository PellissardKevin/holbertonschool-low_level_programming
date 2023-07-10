0;10;1c0;10;1c#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenation of two string
 * @s1: first string
 * @s2: second string
 * Return: Pointer with space or null if it's an ampty string
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0, size_s2 = 0;
	char *ptr, *res;

	/* if s1 = NULL or s2 = NULL */
	if (s1 == NULL)
		s1 = '\0';
	else if (s2 == NULL)
		s2 = '\0';
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = '\0';
		s2 = '\0';
	}

	/*  size of string s1 and s2 */
	while (s1[size_s1])
		size_s1++;

	while (s2[size_s2])
		size_s2++;

	/* Allocate memory */
	ptr = malloc((size_s1 + size_s2) + 1);

	if (ptr == NULL)
		return (NULL);

	/*duplicate and concate strings*/
	res = ptr;
	while (*s1)
		*res++ = *s1++;

	while (*s2)
		*res++ = *s2++;

	*res = '\0';

	return (ptr);
}
