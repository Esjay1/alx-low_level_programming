#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - displays each array element
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print
 * Retutn: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((action == NULL) || (array == NULL))
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
