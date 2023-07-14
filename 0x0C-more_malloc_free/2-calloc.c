#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: the elements of the array
 * @size: the size of each element
 *
 * Return: the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	int j, k;

	k = 0;
	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	k = nmemb * size;
	result = malloc(nmemb * size);
	if (result == NULL)
	{
		return (NULL);
	}
	while (j < k)
	{
		result[j] = 0;
		j++;
	}
	return (result);
}

