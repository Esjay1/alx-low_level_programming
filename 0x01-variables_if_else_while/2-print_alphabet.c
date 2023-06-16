#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char context;    /* declare a variable */

	for (context = 'a'; context <= 'z'; context++)
	{
		putchar(context);
	}
	/* introduce the newline */
	putchar('\n');
	return (0);
}

