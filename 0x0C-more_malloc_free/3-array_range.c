#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the starting value
 * @max: the ending value
 *
 * Return: the array of integers
 */
int *array_range(int min, int max)
{
	int *res, k;

	k = 0;
	if (min > max)
	{
		return (NULL);
	}
	res = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (res == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		res[k] = min;
		k++;
		min++;
	}
	return (res);
}
