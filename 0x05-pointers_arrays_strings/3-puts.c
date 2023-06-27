#include "main.h"

/**
 * _puts - print the string
 * @str: the string pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
