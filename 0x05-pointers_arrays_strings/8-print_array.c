#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an arrayseparated with comma
 * @a: an array of elements
 * @n: an input integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
