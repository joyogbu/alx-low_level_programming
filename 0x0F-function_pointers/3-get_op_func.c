#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function to perform the
 * operation selected by the user
 * @s: operator passed as argument to the function
 * Return: returns a pointer to the function selected
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	s = ops[].op;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


	ops[0].op = "+";
	ops[1].op = "-";
	ops[2].op = "*";
	ops[3].op = "/";
	ops[4].op = "%";
	ops[5].op = NULL;
	if (ops[i].op == NULL || ops[i] > 4)
	{
		return (NULL);
	}
	/** return ((*get_op_func(s[i]))(a, b)); **/
	return (ops[i].f);
}
