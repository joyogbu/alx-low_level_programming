#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a strinh
 * @s: an input string
 * Return: the length of n
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
