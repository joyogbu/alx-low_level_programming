#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *po;

	printf("%s\n", s1);
	printf("%s", s2);
	po = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", po);
	po = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", po);
	return (0);
}
