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
	int i, j, n;
	int *arr_pt;

	if (min > max)
		return (NULL);
	n = max - min + 1; 
	arr_pt = malloc(sizeof(int) * (n + 1));
	max = arr_pt[0];
	min = arr_pt[0];
	for (i = 0; i <= n; i++)
	{
		if (arr_pt[i] > max)
		{
			max = arr_pt[i];
		}
		if (arr_pt[i] < min)
		{
			min = arr_pt[i];
		}
	}
	for (j = 0; j <= n; j++)
	{
		arr_pt[i] = min++;
	}
	return (arr_pt);
}
