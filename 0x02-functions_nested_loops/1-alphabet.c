#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function prints the alphabets in lowercase followed by a new line
 *
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
