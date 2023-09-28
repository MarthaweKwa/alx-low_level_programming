#include "main.h"

/**
 * factorial -  that returns the factorial of a given number.
 * @n: number of factrial
 * Return factorial
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	return n * factorial(n - 1);

}
