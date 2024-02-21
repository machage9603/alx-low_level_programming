#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints
 * its contents to the POSIX standard output.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read and print from the file.
 * Return: - The number of letters actually read and printed on success.
 *   - 0 if the file could not be opened or read,
 *   if `filename` is NULL,
 * - if write fails to write the expected
 * number of bytes, or if any other error occurs.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t byte_read, byte_write = 0;

	if (filename == NULL)
		return (0);


	/*open the text file in read only mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	 /*read text file*/
	byte_read = read(fd, buf, letters);

	if (byte_read == -1) /*check there was error reading*/
	{
		close(fd);
		return (0);
	}

	/*write contents to the POSIX standard output*/
	byte_write = write(STDOUT_FILENO, buf, byte_read);
	close(fd);

	/*check error*/
	if (byte_write == -1 || (size_t)byte_write != (size_t)byte_read)
		return (0);

	/*return no. of bytes*/
	return (byte_write);
}
