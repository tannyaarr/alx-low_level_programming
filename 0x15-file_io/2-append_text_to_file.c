#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - append a text at the end of a file
 * @filename: the name of the  file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	while (text_content && text_content[len] != '\0')
		len++;

	if (text_content)
	{

		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
