#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function the converts lowercase to uppercase
 * @s: an input string
 * Return: pointer to the converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (start);
}
