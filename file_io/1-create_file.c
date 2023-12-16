#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file will be created
 * @text_content: content will be added to the created file
 *
 * Return: success 1 or fail -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

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
