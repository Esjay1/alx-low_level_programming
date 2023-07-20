#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The character to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: variable number of strings to be printed.
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *res;
	unsigned int pos;
	va_list strings;

	va_start(strings, n);
	for (pos = 0; pos < n; pos++)
	{
		res = va_arg(strings, char *);
		if (res == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", res);
		}
		if (pos != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}

