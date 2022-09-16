#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints 1 to 100
 * multiples of 3 are replaced with fizz,
 * multiples of 5 are replaced with buzz
 * multiples of both 3 and 5 are replaced with fixxBuzz
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz" );
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	putchar('\n');
	return (0);
}
