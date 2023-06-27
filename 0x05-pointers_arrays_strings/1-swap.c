#include "main.h"

/**
 * swap_int - swap the integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int test[2];

	test[0] = *a;
	test[1] = *b;
	*a = test[1];
	*b = test[0];
}
