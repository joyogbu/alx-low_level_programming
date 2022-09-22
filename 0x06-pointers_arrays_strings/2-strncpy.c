#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copy's a string
 * @dest: an input s5ring
 * @src: an input string
 * @n: an input integer

 * Return: a pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;
	char *pt1 = dest;
	char *pt2 = src;

	while (*src)
	{
		j++;
		src++;
	}
	j++;
	if (n > j)
	{
		n = j;
	}
	src = pt2;
	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (pt1);
}
