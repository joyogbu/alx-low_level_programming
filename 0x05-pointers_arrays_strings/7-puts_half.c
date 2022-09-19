#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int j = 0;

	while (str[i] != 0)
	{
		j++;
	}
	/** if (len % 2 == 0) */
		/** n = len / 2; */

	/** else */
		/** n = (len + 1) / 2; */
	for (j /= 2; str[j] != 0; j++)
		_putchar(str[j]);
	_putchar('\n');
}
