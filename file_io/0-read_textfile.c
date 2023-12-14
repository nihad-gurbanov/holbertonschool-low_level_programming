#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @letters: is the number of letters it should read and print
 * @filename: file to read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fileDescriptor);

	if (bytesRead != bytesWritten)
		return (0);

	return (bytesRead);
}

