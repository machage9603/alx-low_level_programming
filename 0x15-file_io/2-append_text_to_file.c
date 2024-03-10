#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: -1 on failure and 1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}

