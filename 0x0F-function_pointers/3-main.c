#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
	int i;
	int a, b;
	char *sp;
	
	sp = (*get_op_func(s[i]))(a, b);
	printf("%d", sp);
	return (0);
}
