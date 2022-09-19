#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that updates the pointer value
 * @n: an integer value
 * return: nothing
 */
void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;
}
