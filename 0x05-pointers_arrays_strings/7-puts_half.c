#include "main.h"

/**
 * puts_half - display half of the string
 * @str: the string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int t;

	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	t = (((len - 1) / 2) + 1);
	while ((t > ((len - 1) / 2)) && (t < len))
	{
		_putchar(str[t]);
		t = t + 1;
	}
	_putchar('\n');
}
