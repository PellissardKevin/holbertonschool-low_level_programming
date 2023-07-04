#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if it's an alphanumerique
 * @c: param for checking
 * Return: 0 if it's not an alpha, else return 1
 */
int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' '))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
