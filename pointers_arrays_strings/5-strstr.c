#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string source to occurate
 * @needle: string to find in string source
 * Return: string find
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, first;
	char *p = haystack;

	while (p[i] != '\0')
	{
		while (p[i] != needle[0] && p[i] != '\0')
			i++;

		if (p[i] == '\0')
			return (0);

		first = i;

		while (p[i] == needle[j] && p[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}

		if (needle[j] == '\0')
			return (haystack + first);
		if (p[i] == '\0')
			return (haystack);

		i = first + 1;
		j = 0;
	}

	return (p);
}
