#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * s1 and n bytes from s2
 * @s1: an input string
 * @s2: an input string
 * @n: number of bytes from s2
 * Return: NULL if the function fails,
 * otherwise returns a pointer to the newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	char *sptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	sptr = malloc(sizeof(char) * (i + n + 1));
	if (sptr == NULL)
	{
		return (NULL);
	}
	if (n >= j)
	{
		n = j;
	}
	for (i = 0; s1[i]; i++)
	{
		sptr[k] = s1[i];
		j++;
		k++;
	}
	for (j = 0; j <= n; j++)
	{
		sptr[k] = s2[j];
		k++;
	}
	sptr[k] = '\0';
	return (sptr);
}
