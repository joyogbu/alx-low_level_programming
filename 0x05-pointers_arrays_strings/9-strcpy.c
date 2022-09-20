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
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (temp);
}
