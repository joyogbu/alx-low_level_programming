#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len	= 0, j = 0;
	char temp;

	while (s[len] != '\0')
		len++;
	while (j < --len)
	{
		temp = s[j];
		s[j++] = s[len];
		s[len] = temp;
	}
}
