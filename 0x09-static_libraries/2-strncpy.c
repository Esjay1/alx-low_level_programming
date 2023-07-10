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
	int len;
	int src_len;

	len = 0;
	src_len = 0;
	while ((dest[len] != '\0') && (src_len < n))
	{
		dest[len] = src[src_len];
		len++;
		src_len++;
	}
	while (dest[len] != '\0')
	{
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
