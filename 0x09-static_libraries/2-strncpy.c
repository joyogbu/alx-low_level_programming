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
	int index = 0;
	char *pt1 = dest;

	while (src[index++])
	{
		j++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = j; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (pt1);
}
