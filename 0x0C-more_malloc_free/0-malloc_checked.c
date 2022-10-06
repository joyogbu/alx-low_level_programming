#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory space to be allocated
 * Return: a pointervto the allocated space
 */
void *malloc_checked(unsigned int b)
{
	char *spt;

	spt = malloc(b);
	if (spt == NULL)
		exit(98);
	return (spt);
}
