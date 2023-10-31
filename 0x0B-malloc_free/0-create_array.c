#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to allocate memory
 * @size: count of the number of characters needed
 * @c: the character needed
 *
 * Return: the pointer to the array of chars or Null if it fails
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char_array = malloc(sizeof(char) * size);
	if (char_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}
	return (char_array);
}
