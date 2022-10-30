#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number ti an unsigned integer
 * @b: a pointer to an input string of 0s and 1s
 * Return: the converted number, 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			d = (d << 1) | 1;
		}
		if (b[i] == '0')
		{
			d <<= 1;
		}
	}
	return (d);
}
