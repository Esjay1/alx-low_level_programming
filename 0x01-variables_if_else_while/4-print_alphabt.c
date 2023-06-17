#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char context;    /* declare the variable */

	for (context = 'a'; context <= 'z'; context++)
	{
		if ((context != 'q') && (context != 'e'))
		{
			putchar(context);
		}
	}
	putchar('\n');
	return (0);
}
