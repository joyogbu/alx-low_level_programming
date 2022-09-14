#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: an input integer
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
				}
			printf(", ");
		}
		printf("\n");
	}
}



