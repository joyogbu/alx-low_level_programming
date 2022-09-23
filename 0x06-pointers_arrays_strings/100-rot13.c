#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that string using rot13
 * @s: an input string
 * Return: an encoded string
 */
char *rot13(char *s)
{
	int indx1 = 0;
	int indx2;
	char alpha[52] = {
	'A', 'B', 'C', 'D', 'E',
	'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N', 'O',
	'P', 'Q', 'R', 'S', 'T',
	'U', 'V', 'W', 'X', 'Y',
	'Z', 'a', 'b', 'c', 'd',
	'e', 'f', 'g', 'h', 'i',
	'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's',
	't', 'u', 'v', 'w', 'x',
	'y', 'z'};
	char tkey[52] = {
	'N', 'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', 'A', 'B',
	'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L',
	'M', 'n', 'o', 'p', 'q',
	'r', 's', 't', 'u', 'v',
	'w', 'x', 'y', 'z', 'a',
	'b', 'c', 'd', 'e', 'f',
	'g', 'h', 'i', 'j', 'k',
	'l', 'm'};

	while (s[indx1])
	{
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (s[indx1] == alpha[indx2])
			{
				s[indx1] = tkey[indx2];
				break;
			}
		}
		indx1++;
	}
	return (s);
}
