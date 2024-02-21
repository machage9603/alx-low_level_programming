#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates function that creates file
 * @filename: file to be created
 * @text_content: is NULL
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	/* Check if filename is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	int fd;

	/* Open || creat file with appropriate permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (fd == -1)
		{
			/* Failed to create or open the file */
			return (-1);
		}
	/* If text_content is not NULL, write its content to the file */
	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			/* Failed to write to the file */
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(fd);
	/* Return 1 for success */
	return (1);
}
