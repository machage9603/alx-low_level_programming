#include "main.h"

/**
 * read_textfile - reads file and prints it to the POSIX
 * @letters: the no. of letters it should read and print
 * @filename: file to be read and printed
 * Return: actual number of letters it could read/print,
 * otherwise print 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bytes_read, bytes_written, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);


	free(buf);
	close(fd);

	return (bytes_written);
}
