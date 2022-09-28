#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a stringfollowed by a new line
 * @s: an output string
 * Return: a pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
