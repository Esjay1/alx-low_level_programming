#include "main.h"

/**
 * _strlen_recursion - Print a string in reverse
 * @s: pointer to the string
 *
 * Return: length of yhe string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
