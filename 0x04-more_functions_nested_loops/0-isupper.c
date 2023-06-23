#include "main.h"
/**
 * _isupper - test if it is an upper case letter or not.
 * @c: character to be tested
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
