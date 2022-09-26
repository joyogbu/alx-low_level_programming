#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies n bytes from memory area src
 * to memory area dest
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: no of bytes to copy
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/** char *start = src; */
	char *end = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (end);
}
