#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _stren_recursion(++s));
}

/**
 * pl - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolens.
 */
int p1(char *s, int 1)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (pl(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome - char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
