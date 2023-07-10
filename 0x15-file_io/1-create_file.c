#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 * Return: if the function fails -1
 * otherwise 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);
	close(fd);

	return (1);
}
