#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of file to read from
 * @letters: the number of letters to read and print
 * Return: actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t s;
	ssize_t p;
	char *c;

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDWR);
	if (f < 0)
	{
		free(c);
		return (0);
	}
	s = read(f, c, letters);
	if (s < 0)
	{
		free(c);
		return (0);
	}
	p = write(1, c, s);
	free(c);
	close(f);
	if (p < 0 || p != s)
	{
		free(c);
		return (0);
	}
	return (p);
}
