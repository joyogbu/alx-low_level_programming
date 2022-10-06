#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: an input string
 * @s2: an input string
 * Return: returns NULL if NULL is passed or on failure,
 * otherwise return a pointer to the allocated
 * memory space containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *spt = s1;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[j])
	{
		i++;
		j++;
	}
	spt = malloc(sizeof(char) * (i + j + 2));
	if (s1 == NULL || !spt)
	{
		return (NULL);
	}
	for (j = 0; s1[j]; j++)
	{
		spt[k] = s1[j];
		k++;
		i++;
	}
	for (j = 0; s2[j]; j++)
	{
		spt[k] = s2[j];
		k++;
		i++;
	}
	spt[k] = '\0';
	return (spt);
}
