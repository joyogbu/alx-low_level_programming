#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to9
 * Return: nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 48, x < 58; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
