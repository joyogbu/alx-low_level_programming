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

	for (; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
