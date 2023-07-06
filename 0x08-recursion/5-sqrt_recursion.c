#include "main.h"

/**
 * testfunc - test for the square root
 * @y: the number whose square root is being found
 * @z: the square root to be found
 *
 * Return: the square root.
 */
int testfunc(int y, int z)
{
	if ((z * z) == y)
	{
		return (z);
	}
	if ((z * z) > y)
	{
		return (-1);
	}
	return (testfunc(y, (z + 1)));
}

/**
 * _sqrt_recursion - function for finding the square root
 * @n: the number whose square root is being found
 *
 * Return: the square root.
 */

int _sqrt_recursion(int n)
{
	return (testfunc(n, 0));
}

