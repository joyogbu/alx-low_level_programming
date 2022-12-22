#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *str = "Congratulations, you win the Jackpot!";
	char *num = "9, 8, 10, 24, 75 - 9";
	write(1, &num, 20);
	write(1, &str, 37);
	exit(0);
}
