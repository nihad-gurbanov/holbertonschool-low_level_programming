#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file that content will be appended to
 * @text_content: text content that will be added to the file
 *
 * Return: succes 1, fail -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if  (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

