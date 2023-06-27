#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the string pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int begin;
	int stop;
	char t;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	begin = 0;
	stop = len - 1;
	while (begin < stop)
	{
		t = s[begin];
		s[begin] = s[stop];
		s[stop] = t;
		begin = begin + 1;
		stop = stop - 1;
	}
}

