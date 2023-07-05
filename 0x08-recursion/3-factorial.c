#include "main.h"

/**
 * factorial - compute the factorial of an integer
 * @n: integer whose factorial is to be found
 *
 * Return: the value of the factorial
 */


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
