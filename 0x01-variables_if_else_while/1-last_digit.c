#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* other headers goes here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg = n % 10;
	/* testt the conditions */
	if (lg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lg);
	}
	else if (lg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lg);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lg);
	}
	return (0);
}
