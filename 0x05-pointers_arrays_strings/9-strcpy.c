#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to
 * by src including the terminating (\0) null byte
 * @dest: pointer to destination of string
 * @src: poi ter to source of string
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do
	{
		j++;
		dest[j] = src[j];
	}
	while (src[j] != '\0')
	return (dest);
}
