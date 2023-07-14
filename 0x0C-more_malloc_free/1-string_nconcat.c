#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - computes the length of a string
 * @t: pointer to the string
 *
 * Return: the string length.
 */
int length(char *t)
{
	int i;

	i = 0;
	while (t[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenetes the first sting and n numbers of second
 * string
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: number of second strings characters to copy
 * Return: Pointer to the two
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sum, x, y, lens1, lens2;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = length(s1);
	lens2 = length(s2);
	if (n >= lens2)
	{
		n = lens2;
	}
	sum = lens1 + n + 1;
	pointer = malloc(sum);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < lens1; x++)
	{
		pointer[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		pointer[x + y] = s2[y];
	}
	pointer[sum - 1] = '\0';
	return (pointer);
}
