#include "main.h"

/**
 * *_strncat - concatenate up to a number of specific times
 * @dest: the string to be added to
 * @src: the source string to be added to dest
 * @n: the number of characters to be concatenated
 *
 * Return: the new dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int src_len;

	len = 0;
	while (dest[len] != '\0')
	{
		len = len + 1;
	}
	src_len = 0;
	for (src_len = 0; src_len < n; src_len++)
	{
		dest[len] = src[src_len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
