#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char context;  /* declare the variables */
	char context1;

	for (context = 'a'; context <= 'z'; context++)
	{
		putchar(context);
	}
	for (context1 = 'A'; context1 <= 'Z'; context1++)
	{
		putchar(context1);
	}
	putchar('\n');
	return (0);
}
