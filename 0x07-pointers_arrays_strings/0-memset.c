#include "main.h"
#include <stdio.h>

/**
 * _memset - fills n byte of memory area pointed to by s
 * with a constant char b
 * @s: starting address of memory to be filled
 * @b: value to ne filled
 * @n: number of bytes to be filled
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++;)
		*(s + i) = b;
	return (s);
}
