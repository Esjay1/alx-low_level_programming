#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments to the program
 * @argc: the total number of arguments
 * @argv: the value of the individual argument
 *
 * Return: the number of arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < argc; i++)
	{
		argv[i] = argv[i];
		sum = i;
	}
	printf("%d\n", sum);
	return (0);
}
