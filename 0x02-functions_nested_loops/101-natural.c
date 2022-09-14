#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints the sum of all the multiples of 3 of 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
