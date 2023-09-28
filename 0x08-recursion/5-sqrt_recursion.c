#include "main.h"

/**
 * _sqrt_recursion - Write a function that return square root of a number
 * @n: source integer
 * Return: square of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt1_recursion(n, 0));
}

/**
 * sqrt1_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt1_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt1_recursion(n, i + 1));
}
