#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers starting from 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int n1 = 1, n2 = 2, nlast = 50, r;
printf("%lu, %lu, ", n1, n2);
for (i = 2; i < nlast; i++)
{
r = n1 + n2;
printf("%lu", r);
if (i != nlast - 1)
printf(", ");
}
printf("\n");
return (0);
}
