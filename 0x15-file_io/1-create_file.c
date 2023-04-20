#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 if successful, -1 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{

		int bytes_written = write(fd, text_content, strlen(text_content));

			if (bytes_written == -1)
			{
				close(fd);
				return (-1);
			}

	}

	close(fd);

	return (-1);
}


