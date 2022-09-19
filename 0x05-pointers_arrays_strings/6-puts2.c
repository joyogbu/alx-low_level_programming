#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: an input string
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0, j = 0;

	while (str[len] != '\0')
		len++;
	len = len - 1;
	for (; j <= len; j = j + 2)
		_putchar(str[j]);
	_putchar('\n');
}
