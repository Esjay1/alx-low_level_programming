#include "main.h"

/**
 * print_line - print the number of lines indicated in the argument
 *@n: integer indicating the number of lines
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}


