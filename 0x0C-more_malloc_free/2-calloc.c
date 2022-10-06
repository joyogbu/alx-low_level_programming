#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that aloocates memory for an array
 * @nmemb: number of array elements
 * @size: size of each array elements
 * Return: Returns NULL if nmemb or size is 0.
 * NULL also if malloc fails, otherwise return a pointer
 * to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_ptr = malloc(size * nmemb);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr_ptr[i] = 0;
	}
	return (arr_ptr);
}
