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

	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	str2 = malloc(sizeof(char) * str[i++]);
	if (str == NULL || !str2)
	{
		return (NULL);
	}
	for (j = 0; j <= str[i++]; j++)
	{
		str2[j] = str[i];
		j++;
		i++;
	}
	str2[j] = '\0';
	return (str2);
}
