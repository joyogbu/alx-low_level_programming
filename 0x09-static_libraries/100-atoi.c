#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string to integer
 * @s: an input string
 * Return: integer
 */
int _atoi(char *s)
{
	int a = 1;
	unsigned int t = 0;
	char n = 0;

	while (*s)
	{
		if (*s == '-')
		{
			a *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			n = 1;
			t = t * 10 + *s - '0';
		}
		else if (n)
		{
			break;
		}
		s++;
	}
	if (a < 0)
	{
		t = (-t);
	}
	return (t);
}
