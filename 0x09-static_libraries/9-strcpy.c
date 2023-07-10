#include "main.h"

/**
 * _strcpy - copy the string from a source pointer
 * to a destination one
 * @dest: the destination pointer
 * @src: the source pointer
 *
 * Return: produce the dest string
 */


char *_strcpy(char *dest, char *src)
{
	int len;
	int i;
	char a;

	len = 0;
	while (src[len] != '\0')
	{
		len = len + 1;
	}
	for (i = 0; i <= len; i++)
	{
		a = src[i];
		dest[i] = a;
	}
	return (dest);
}
