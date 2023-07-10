#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies its two arguments
 * @argc: first argument
 * @argv: second argument
 *
 * Return: the multiplication result
 */
int main(int argc, char *argv[])
{
	int j;
	int k;
	int multiply;

	if (argc == 3)
	{
		j = atoi(argv[argc - 1]);
		k = atoi(argv[argc - 2]);
		multiply = (j * k);
		printf("%d\n", multiply);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
