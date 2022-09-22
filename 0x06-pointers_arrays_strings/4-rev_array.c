#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of
 * an array of integers
 * @a: input array
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
