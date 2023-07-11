#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void print_error_exit(int exit_code, const char *message, const char *file) 
{
	dprintf(STDERR_FILENO, message, file);
	exit(exit_code);
}

void close_file(int fd, const char *file) 
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

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
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1])
	}

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		close_file(from, argv[1]);
        	print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

    	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
        	if (w == -1)
		{
			close_file(from, argv[1]);
			close_file(to, argv[2]);
			print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

    	if (r == -1)
	{
		close_file(from, argv[1]);
		close_file(to, argv[2]);
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	
	close_file(from, argv[1]);
	close_file(to, argv[2]);

	return (0);
}
