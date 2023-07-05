#include "main.h"

/**
 * _puts_recursion - prints out the string pointed to
 * @s: pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
