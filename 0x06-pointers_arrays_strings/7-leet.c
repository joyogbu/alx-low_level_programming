#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = sub[j];
			}
		}
		i++;
	}
	return (s);
}
