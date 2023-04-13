#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 * using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t i, m;
	size_t high = size - 1;

	while (low <= high)
	{
		printf("Searching in array:");
		m = (low + high) / 2;
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[m] < value)
		{
			low = m + 1;
		}
		else if (array[m] > value)
		{
			high = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}

