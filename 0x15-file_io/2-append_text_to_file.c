#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/uio.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: dtring to append
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_APPEND);
	if (f < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	w = write(f, text_content, i);
	if (w < 0)
		return (-1);
	close(f);
	return (1);
}
