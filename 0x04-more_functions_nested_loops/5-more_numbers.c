#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int n, k;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
			}
		_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
