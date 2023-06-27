#include "main.h"
#include <stdio.h>

/**
 * print_array - display the array indicated by the number of int
 * @a: array pointer
 * @n: number of values to be displayed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int len;
	int i;

	len = 0;
	while (a[len] != '\0')
	{
		len = len + 1;
	}
	if (n <= len)
	{
		for (i = 0; i <= (n - 1); i++)
		{
			if (i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{	printf("%d\n", a[i]);
			}
		}
	}
	else
	{	printf("check the parameter and try again\n");
	}
}
