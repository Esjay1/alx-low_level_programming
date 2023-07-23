#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: number of paramters
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;

	va_list list;

	sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum = (sum + va_arg(list, const unsigned int));
		}
	}
	va_end(list);
	return (sum);
}
