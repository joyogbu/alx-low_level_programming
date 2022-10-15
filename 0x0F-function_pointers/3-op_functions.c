#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers together
 * @a: first integer
 * @b: second integer
 * Return: result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first integer
 * @b: second integer
 * Return: result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
	
/**
 * op_mul - multiplies two numbers together
 * @a: first integer
 * @b: second integer
 * Return: result of the operation
 * */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: the base number
 * Return: rwsult of the operation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - divides two numbers leaving a remainder
 * @a: first number
 * @b: base number
 * Return: result of the operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
