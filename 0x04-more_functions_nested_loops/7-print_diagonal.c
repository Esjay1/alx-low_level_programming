#include "main.h"

/**
 * print_diagonal - display the lines diagonally
 *@n: integer to use
 *
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
