#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: name to print
 * @f: pointer to the name
 * Return: nothing
 */
void print_name(char *name, void(*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
