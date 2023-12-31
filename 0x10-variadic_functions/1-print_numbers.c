#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, obj;

	va_start(nums, n);
	for (index = 0; index < n; index++)
	{
		obj = va_arg(nums, const unsigned int);
		printf("%d", obj);

		if ((index != (n - 1)) && ((separator != NULL)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
