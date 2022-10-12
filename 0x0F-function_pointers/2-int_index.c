#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: size of the array
 * @cmp: function pointer
 * Return: returns the first element for which the cmp function does not
 * return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int found = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
	return (0);
}
