#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: On success 1.
 *
 */
void print_alphabet_x10(void)
{
	char test;
	char ch;

	for (test = 1; test <= 10; test++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
