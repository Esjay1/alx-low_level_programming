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
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(s[i]);
	_putchar('\n');
}
