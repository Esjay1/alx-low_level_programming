#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: The character to print it's last digit
 *
 * Return: the last digit.
 */
int print_last_digit(int c)
{
	int start;

	start = c % 10;
	if (start < 0)
	{	start = -start;
	}
	_putchar(start + '0');
	return (start);
}

