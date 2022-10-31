#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to print
 * Return: on success 1, on failure -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
