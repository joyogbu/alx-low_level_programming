#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: returns NULL if min is greater than  max
 * or if malloc function fails, otherwise return a pointer to the created array
 */
int *array_range(int min, int max)
{
	int j, n;
	int *arr_pt;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	arr_pt = malloc(sizeof(int) * n);
	for (j = 0; j <= n; j++)
	{
		arr_pt[j] = min++;
	}
	return (arr_pt);
}
