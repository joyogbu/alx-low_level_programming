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
	char *ptr;

	while (s1[i] != '\0')
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	while (s2[i] != '\0')
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
