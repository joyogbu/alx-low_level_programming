#include "lists.h"
#include <stdio.h>

void first(void) --attribute-- ((constructor));

/**
 * first - prints a string before the main function is executed
 * Return: nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
