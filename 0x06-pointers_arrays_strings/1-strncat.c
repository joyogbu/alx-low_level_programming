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
	int j = 0;
	int i = 0;
	char *p1 = dest;
	char *p2 = src;

	while (*src)
	{
		j++;
		src++;
	}
	while (*dest)
	{
		dest++;
	}
	if (n > j)
	{
		n = j;
	}
	src = p2;
	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p1);
}
