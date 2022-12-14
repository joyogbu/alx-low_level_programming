#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of characters
 * and initializes it with a specific character
 * @size: size of memory space allocated
 * @c: an array of characters
 * Return: returns Null if the size is 0 or if it fails
 * otherwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(sizeof(char) * size);
	if (size <= 0 || !(arr))
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
