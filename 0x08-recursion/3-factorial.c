#include "main.h"
#include <stdio.h>

/**
 * factorial - function to print the factorial of a given number
 * @n: an input integer
 * Return: returns -1 if n is lower than 0, 1 if n is 0,
 * else returns the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
