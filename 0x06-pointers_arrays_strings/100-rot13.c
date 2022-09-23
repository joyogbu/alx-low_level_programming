#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that string using rot13
 * @s: an input string
 * Return: an encoded string
 */
char *rot13(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
		{
			if ((s[j] >= 'a' && s[j] <= 'm') || (s[j] >= 'A' && s[j] <= 'M'))
			{
				s[j] += 13;
			}
			else
			{
				s[j] -= 13;
			}
		}
		j++;
	}
	return (s);
}
