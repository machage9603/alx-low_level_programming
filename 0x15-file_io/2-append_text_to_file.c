#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL
 * Return: 1 on succcess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, i;

	if (filename == NULL)
		return (-1);

	/*check if text_content is null*/
	if (text_content == NULL)
	{
		/*check if the exists*/
		if (access(filename, W_OK) == 0)
			return (1);
		else
			return (-1);
	}


	/*open file in append mode*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	/*write text_content to the file*/
	for (i = 0; text_content[i] != '\0'; i++)
	{
		bytes_written = write(fd, &text_content[i], 1);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/*close file*/
	if (close(fd) == -1)
		return (-1);

	return (1);
}
