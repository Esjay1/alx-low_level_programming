#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that displays the minimum number of coins
 * to make a change
 * @argc: the number of program arguments
 * @argv: the value of each individual argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int counter;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	counter = 0;
	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents = (cents - 25);
		}
		else if (cents >= 10)
		{
			cents = (cents - 10);
		}
		else if (cents >= 5)
		{
			cents = (cents - 5);
		}
		else if (cents >= 2)
		{
			cents = (cents - 2);
		}
		else if (cents >= 1)
		{
			cents = (cents - 1);
		}
		counter = counter + 1;
	}
	printf("%d\n", counter);
	return (0);
}
