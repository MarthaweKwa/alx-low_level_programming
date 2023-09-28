#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s - string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
