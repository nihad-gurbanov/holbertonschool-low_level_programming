#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Handles errors and exits the program.
 *
 * @code: Code to exit with.
 * @message: Error message to print out.
 * @filename: Name of the file associated with the error.
 * @fd: File descriptor associated with the error.
 */
void error_exit(int code, const char *message, int fd)
{
	dprintf(2, "%s %d\n", message, fd);
	exit(code);
}

/**
 * main - Main function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Success.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file", -1);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file", -1);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", -1);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", fd_to);

	return (0);
}

