#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that prints the arguments it receives
 * @argc: the number of arguments including the prigram name
 * @argv:  the string indicating the argument
 *
 * Return - the arguments including the program name
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

