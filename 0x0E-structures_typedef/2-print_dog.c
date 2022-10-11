#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print a struct dog
 * @d: pointer
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		printf("(nil)");
	}
	printf("Name: %s\n Age: %f\n Owner: %s\n", (*d).name, (*d).age, (*d).owner);
}
