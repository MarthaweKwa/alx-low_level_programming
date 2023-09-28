#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input integer
 * Return: -1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0000000000);
	}
	return (getprime(n, n - 1));
}

/**
 * getprime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @y: iterator
 * Return: 1 or 0
 */


int getprime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (getprime(n, y - 1));
}
