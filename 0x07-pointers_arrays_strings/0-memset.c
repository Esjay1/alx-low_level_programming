#include "main.h"

/**
 * *_memset - copy a char to first few memory
 * @s: pointer to the memory area
 * @b: the printed character
 * @n: the number of times b is copied
 *
 * Return: the value of the result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len <= n; len++)
	{
		s[len] = b;
	}
	return (s);
}

