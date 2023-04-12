#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return 1 if the file exists, -1 if the files does not exits
 * or if you do not have required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);


	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		w = write(fd, text_content, len);

		if (w == -1)
		return (-1);
	}
	close(fd);

	return (1);
}
