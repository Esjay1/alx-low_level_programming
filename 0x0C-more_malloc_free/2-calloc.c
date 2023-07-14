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

	result = 0;
	result = malloc(nmemb * size);
	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}

