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
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		{
			return (0);
		}
}
