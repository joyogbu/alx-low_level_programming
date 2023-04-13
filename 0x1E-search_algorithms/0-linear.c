#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - searches for an integer in an array of integers
 * @array: pointer to the first eleement of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value to search for or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
