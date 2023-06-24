#include "main.h"

/**
 * print_square - display the vaule in # square blocks
 *@size: the parameterused fro size determination
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
