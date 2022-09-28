#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a reverse string
 * @s: input string
 * Return: reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_re_recursion(s + 1);
		_putchar(*s);
	}
}
