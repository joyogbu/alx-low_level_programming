#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates n-byte of one string to another string
 * @dest: input string
 * @src: input string
 * @n: n no of bytes
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	char *p = dest;

	while (src[b] != '\0')
	{
		a++;
		b++;
	while (dest[a] != '\0')
	{
		a++;
	}
	if (n > b)
	{
		n = b;
	}
	for (; n < a; a++)
	{
		dest[a] = src[b];
	}
	}
	dest[a] = '\0';
	return (p);
}
