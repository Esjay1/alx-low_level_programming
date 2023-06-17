#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int spec;

	for (spec = 48; spec <= 57; spec++)
	{
		putchar(spec);
	}
	for (spec = 97; spec <= 102; spec++)
	{
		putchar(spec);
	}
	putchar('\n');
	return (0);
}
