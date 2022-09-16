#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of # of size@size followed by a new line
 * @size: parameter
 * Return: nothing
 */
void print_square(int size)
{
int a, b;

if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < (size - 1); b++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
