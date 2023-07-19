#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - display the name using pointer to a function
 * @name: name string to add
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((f == NULL) || (name == NULL))
	{
		return;
	}
	f(name);
}
