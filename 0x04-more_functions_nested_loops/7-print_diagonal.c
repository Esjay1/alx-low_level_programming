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

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (i = 0; i <= n; i++)
			{	
				_putchar('\\');
				_putchar('$');
				_putchar('\n');
				_putchar(' ');
			}
			_putchar(' ');
		}
	}
	else
	{
		_putchar('\n');
	}
}
