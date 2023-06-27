#include "main.h"

/**
 * puts2 - display every other character of a string
 * @str: string pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len = len + 1;
	}
	_putchar('\n');
}
