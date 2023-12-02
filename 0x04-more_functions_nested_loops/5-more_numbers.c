#include "main.h"

/**
 * more_numbers - display numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int start;
	int stop;

	start = 0;
	stop = 14;
	for (i = 0; i <= 9; i++)
	{
		for (j = start; j <= stop; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
