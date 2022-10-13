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
	int i, sum;
	va_list args;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
