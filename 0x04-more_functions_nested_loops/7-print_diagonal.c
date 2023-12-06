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
	int j;

	if(n <= 0)
	{
		_putchar('$');
		_putchar('\n');
	}	
	else
	{
		for (i = 0; i == n; i++)
		{
			for (j = 0; j == n; j++)
			{
				_putchar(' ');
			}
			j = 0;
			_putchar('$');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
