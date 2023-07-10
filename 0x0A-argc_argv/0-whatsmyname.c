#include <stdio.h>

/**
 * main - a program that prints it's name
 * @argc: the number of strings in the program
 * @argv: the value of the parameters
 *
 * Return: the name of the program
 */
int main(int argc, char *argv[])
{
	int i;

	argc = 1;
	i = 0;
	if ((i >= 0) && (i < argc))
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
