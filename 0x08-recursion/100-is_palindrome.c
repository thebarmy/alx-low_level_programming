#include "main.h"
/**
 * _strlen_recursion - return the length of a string.
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * test - test each character of a string
 * @s: string
 * @n1: the small
 * @n2: the biggest
 * Return: test
 */
int test(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + test(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - see if is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (test(s, 0, _strlen_recursion(s) - 1));
}
