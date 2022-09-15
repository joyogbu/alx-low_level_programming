#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * returns 1 if uppercase and 0 if otherwise
 * @c: character to check
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char upper = 'A';

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
