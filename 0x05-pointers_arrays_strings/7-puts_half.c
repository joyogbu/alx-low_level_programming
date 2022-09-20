#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int j = 0, n;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		n = j / 2;
	}
	else
		n = (j - 1) / 2;
	for (j = n; j < n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
