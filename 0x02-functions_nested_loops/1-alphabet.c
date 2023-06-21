#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char sample;

	for (sample = 'a'; sample <= 'z'; sample++)
	{
		_putchar(sample);
	}
	_putchar('\n');
}
