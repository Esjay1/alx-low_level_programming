#include "main.h"

/**
 * print_rev - displas a string in reverse
 *
 * @s: the string pointer
 * @i: individual string character
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
