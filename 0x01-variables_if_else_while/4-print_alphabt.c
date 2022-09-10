#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	char ne = 'e';
	char nq = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != ne) || (ch != nq))
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
