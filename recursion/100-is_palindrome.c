#include "main.h"
/**
 * is_palindrome - check if the string is a palindrome
 *
 * @s: string to compare
 * Return: 1 if it's true, 0 if false
 */
int is_palindrome(char *s)
{
	int j = strlen(s);

	if (j == 0)
		return (1);

	return (isPalRec(s, 0, j - 1));
}

/**
 * isPalRec - check if the string is a Palindrome
 *
 * @s: string to compare
 * @i: frist index
 * @j: last index
 * Return: 0 if False, 1 if it's true
 */
int isPalRec(char *s, int i, int j)
{
	if (i == j)
		return (1);

	if (s[i] != s[j])
		return (0);

	if (i < j + 1)
		return (isPalRec(s, i + 1, j - 1));

	return (1);
}
