#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: input string 1
 * @src: input string 2
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *pt = dest;

	while (dest[i] != '\0')
	{
		pt[j] = dest[i];
		i++;
		j++;
	}
	while (src[k] != '\0')
	{
		pt[j] = src[k];
		i++;
		j++;
		k++;
	}
	pt[j] = '\0';
	return (pt);
}
