#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks the characters for palindrome
 * @s: string
 * @i: iterator
 * @y: length of the string
 * Return: 1 or 0
 */

int palindrome(char *s, int i, int y)
{
	if (*(s + i) != *(s + y - 1))
		return (0);
	if (i >= y)
		return (1);
	return (palindrome(s, i + 1, y - 1));
}
