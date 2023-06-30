#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: destination string to be copied to
 * @src: Source string to be copied from
 * @n: number of characters of string to copy
 * Return: display the copied string.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0')
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	if (dest[i] != '\0')
	{
		return (dest);
	}
	else
	{
		_putchar('\0');
}
