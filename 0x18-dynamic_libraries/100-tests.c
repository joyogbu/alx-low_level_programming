#include "main.h"
#include <stdio.h>

int main(void)
{
	int a = 8;
	int b = 0;
	int x = add(a, b);
	int y = sub(a, b);
	int z = mul(a, b);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	return (0);
}
