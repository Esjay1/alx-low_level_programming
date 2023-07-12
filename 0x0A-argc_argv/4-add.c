#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int isdigit(int i);
/**
 * main - program that sums its parameters
 * @argc: the total number of parameters
 * @argv: the value of each individual parameter
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int j;

	i = 0;
	j = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
