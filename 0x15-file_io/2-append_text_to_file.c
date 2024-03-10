#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: -1 on failure and 1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	if (!filename)
		return (-1);
	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}

