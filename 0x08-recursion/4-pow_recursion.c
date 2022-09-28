#include "main.h"
#include <sydio.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: an input integer
 * @y: an input integer
 * Return: returns x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
