#include "main.h"

/**
 * findlength - find the length of the string
 * @s: the string
 * Return: the string legth
 */

int findlength(char *s)
{
	if (*s != '\0')
	{
		return (1 + (findlength(s + 1)));
	}
	return (0);
}

/**
 * compare - compare the characters of thd string
 * @s: the string
 * @a: the initial left character position
 * @b: the rightmost charactar value
 * Return: 0 if not the same, 1 otherwise.
 */

int compare(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if ((a == b) || (a == (b + 1)))
		{
			return (1);
		}
		return (0 + compare(s, (a + 1), (b - 1)));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string has the same
 * pronunciation backwards
 * @s: the string considered
 * Return: 1 if it is a palindrome, 0 if it is not
 */

int is_palindrome(char *s)
{
	int b;

	b = findlength(s) - 1;
	if (*s == '\0')
	{
		return (1);
	}
	return (compare(s, 0, b));
}

