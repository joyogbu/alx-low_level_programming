#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * create_file - function that creates file
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 * Description: the created file must have a rw permission.
 * it is truncated if it already exists
 * Return: 1 on succes, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f < 0)
		return (-1);
	while (text_content[i])
	{
		i++;
	}
	w = write(f, text_content, i);
	if (w < 0)
		return (-1);
	close(f);
	return (1);
}
