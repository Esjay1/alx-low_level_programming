#include "main.h"

/**
 * *_memcpy - copies a number of bytes from src memory
 * to destination memory
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 *
 * Return: the value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
