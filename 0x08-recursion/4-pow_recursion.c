#include "main.h"

/**
 * _pow_recursion - compute the power of integer x raised to y
 * @x: integer to be raised
 * @y: the number of times x is raised
 *
 * Return: the raised value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
