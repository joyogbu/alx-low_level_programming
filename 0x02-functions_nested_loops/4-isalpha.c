#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if for alphabetic character
 *
 * @c: character to be checked
 * Return: 1 if alphabet or 0 if otherwise
 *
 */
int _isalpha(int c)
{
	int c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
