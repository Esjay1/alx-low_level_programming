#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr - pointer to previously allocated mem
 * @old_size: allocated space for ptr
 * new_size: new size of the new mem blk
 * Return: newly reallocated mem.
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newpt;
	unsigned int k;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newpt = malloc(new_size);
		if (newpt == NULL)
		{
			return (NULL);
		}
		return (newpt);
	}
	else
	{
		if (new_size == 0)
		{
			free (ptr);
			return (NULL);
		}
	}
	newpt = malloc(new_size);
	if (newpt == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < new_size && k < old_size; k++)
	{
		newpt[k] = ((char *) ptr)[k];
	}
	free (ptr);
	return (newpt);
}
