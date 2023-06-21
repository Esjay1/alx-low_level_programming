#include "main.h"

/**
 * _islower - checks if character is lower
 *
 * Description: This checks if the character is lower case or not
 * @c: is the tested parameter
 *
 * Return: 1 for true, 0 for false
 *
 */
int _islower(int c) /* start the function _islower, with int c */
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
