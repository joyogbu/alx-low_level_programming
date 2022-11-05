#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/uio.h>

void close_file(int fd);
/**
 * close_file - closes dn open file descriptor
 * @fd: file descriptor of fie to close
 * Return: nothing
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program to copy the content of a file to another file
 * @argc: number of arguments supplied
 * @argv: an array of pointers to the actual arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int f1, f2, r, w;
	ssize_t n_bytes = 0;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0 || buffer == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_file(f1);
		free(buffer);
		exit(99);
	}
	while (1)
	{
		r = read(f1, buffer, 1024);
		if (r < 0 || f1 < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			close_file(f1);
			close_file(f2);
			exit(98);
		}
		if (r == 0)
			break;
		/** n_bytes += r; **/
		w = write(f2, buffer, r);
		if (w < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(f1);
			close_file(f2);
			exit(99);
		}
	}
	free(buffer);
	close_file(f1);
	close_file(f2);

	return (0);
}
