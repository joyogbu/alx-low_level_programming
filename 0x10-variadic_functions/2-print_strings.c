#include "variadic_functions"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints string foloowed by a new line
 * @separator: string to be printed in between strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(strings, int);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
