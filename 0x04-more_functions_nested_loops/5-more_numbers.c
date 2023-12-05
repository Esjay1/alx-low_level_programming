#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - display numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	char start[] = {"01234567891011121314"};
	int j;

	for (j = 0; j <= 9; j++)
	{
		while (start[i] != '\0')
		{
			_putchar(start[i]);
			i++;
		}
		_putchar('\n');
		i = 0;
	}
}
