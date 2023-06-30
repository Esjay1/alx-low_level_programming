#include "main.h"

/**
 * *_strcat - concantenate two strings
 * @dest: the destination string that the source string
 * is added to
 * @src: the source string that is added to the destination string
 *
 * Return: the concantenated string
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int src_len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		len = len + 1;
	}
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len = src_len + 1;
	}
	for (i = 0; i <= src_len; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
