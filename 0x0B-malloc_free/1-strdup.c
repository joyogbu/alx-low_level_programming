#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly alolocated space in memory
 * which contains a copy of the steing given as a parameter
 * @str: a string parameter
 * Return: Null if string is = NULL or not enough memory
 * otherwise returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	/** char *s = str; **/
	char *str2;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		i++;
		str++;
	}
	str2 = malloc(sizeof(char) * (i + 1));
	if (str2 == NULL || !str2)
	{
		return (NULL);
	}
	for (; j < i; j++)
	{
		str2[j] = *str;
		str++;
	}
	str2[j] = '\0';
	return (str2);
}
