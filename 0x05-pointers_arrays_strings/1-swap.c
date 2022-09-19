#include "main.h"

/**
 * swap_int
 * - swaps the values of two integwrs
 * @*a: first integer
 * @*b: second integer
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
