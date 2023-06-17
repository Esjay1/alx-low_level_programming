#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char betalph; /* declare the variable */

	for (betalph = 'z'; betalph >= 'a'; betalph--)
	{
		putchar(betalph);
	}
	putchar('\n');
	return (0);
}
