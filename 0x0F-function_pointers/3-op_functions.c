#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers together
 * op_sub - subtracts int b from a
 * op_mul - multiplies int a and b
 * op_div - divides int a by b
 * op_mof - returns remainder of dividing a by b
 * @a: first integer
 * @b: second integer
 * Return: result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
