#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit through 0 to 9
 * @c: the digit to be checked
 * Return: 1 if a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
		return (0);
}
