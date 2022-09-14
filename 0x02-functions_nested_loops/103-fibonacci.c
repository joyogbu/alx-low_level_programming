#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the num of the even values in a Fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
int a = 1, b = 2, total = 0;
int k;
while (b < 4000000)
{
if (b % 2 == 0)
total += b;
k = b;
b += a;
a = k;
}
printf("%d\n", total);
return (0);
}
