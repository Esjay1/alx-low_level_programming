#include "main.h"

/**
 * _strlen - display the length of the string
 * @s: the string pointer
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}
