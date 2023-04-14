#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using jump search
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element or - 1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t m;

	while ((array[high] != array[low]) && (value <= array[high]))
	{
		m = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
		if (m > size)
		{
			printf("Value checked array[%lu] is out of range\n",
					m);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] < value)
			low = m + 1;
		else if (value < array[m])
			high = m - 1;
		else
			return (m);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}
