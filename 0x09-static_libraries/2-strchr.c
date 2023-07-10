#include "main.h"

/**
 * *_strchr - display from the specified character
 * @s: the poinyer to the string
 * @c: the desired character
 *
 * Return: the modified string
 */


char *_strchr(char *s, char c)
{
	int i;
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				_putchar(s[i]);
				i++;
			}
			s[i] = '\0';
		}
	}
	return (s);
}

