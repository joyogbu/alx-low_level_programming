#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as an array on each element of the array
 * @array: an input array
 * @size: array size
 * @action: pointer to the array elements
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
