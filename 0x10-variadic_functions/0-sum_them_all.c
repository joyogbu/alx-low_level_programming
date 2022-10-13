#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - sums all its parameters
 * @n: first parameter
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	sum = 0;
	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
