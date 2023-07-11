#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * create_buffer - allocate 1024 bytes for a buffer
 * @file: the name of the file buffer is storing char for
 * Return: a pointer to the newly-allocated buffer
 */

void print_error_exit(int exit_code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(exit_code);
}
/**
 * close_file - closes file descriptors
 * @fd: The file descriptor to be closed
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: The number of arguments suppiled to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 on Success
 *
 * Description: if the argument count is incorrect - exit code 97.
 * if file_from does not exist or cannot be read - exit code 98.
 * if file_to cannot be created or written to - exit code 99
 * if file_to or file_from cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error_exit(97, "Usage: cp file_from file_to\n", "");
	}

	from = open(argv[1], O_RDONLY);
 	if (from == -1)
	{
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		close_file(from);
		print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			close_file(from);
			close_file(to);
			print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	
	if (r == -1)
	{
		close_file(from);
		close_file(to);
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	
	close_file(from);
	close_file(to);

	return (0);
}
