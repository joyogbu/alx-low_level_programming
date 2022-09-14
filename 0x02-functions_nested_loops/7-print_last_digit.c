#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number in question
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lgi = n % 10;

	if (lgi < 0)
		lgi *= -1;
	_putchar(lgi + '0');
	return (lgi);
}
