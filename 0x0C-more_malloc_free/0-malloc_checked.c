#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates appropriate memory and returns a pointer to it
 * @b: the size of the memory
 *
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}
	else
	{
		return (result);
	}
}
