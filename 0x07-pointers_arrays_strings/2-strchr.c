#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to be located
 * Return: apointer to the first occurence of the string
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	char *sptr = s;

	while(s[i] != '\0')
		if(s[i] == c)
		{
			return (*sptr);
		}
		else
		{
			return (NULL);
		}
}
