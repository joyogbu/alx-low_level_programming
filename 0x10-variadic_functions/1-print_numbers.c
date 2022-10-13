#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: no of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int numbers;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		numbers = va_arg(args, int);
		printf("%d ", numbers);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}
