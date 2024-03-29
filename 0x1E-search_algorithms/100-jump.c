#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump search
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i= 0;
	size_t block = sqrt(size);
	if (array == NULL || size == 0)
		return (-1);
	while (array[block] <= value && block < size)
	{
		printf("Value checked arrray[%lu] = [%d]\n", block, array[block]);
		i = block;
		block += sqrt(size);
		if (block > size)
		{
/*			printf("%d %d\n", array[i], array[i]);*/
			/*printf("Value checked array[%d] = [%d]", array[i], array[i]);*/
			return (-1);
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, block);
	while (i < block)
	/*for (j = i; j < block; j++)*/
	{
		printf("Value checked array [%lu] = [%d]\n", i, array[block]);
		if (array[i] == value)
		{
			/*printf("Value checked array %lu = %lu", block, j);*/
			return (i);
		}
		i++;
	}
	return (-1);
}
