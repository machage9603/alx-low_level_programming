#include "main.h"

/**
 * error_exit - Exits the program with an error message
 * @code: Exit code
 * @message: Error message
 *
 * Description:
 * This function prints the error message
 * to STDERR and exits with the provided
 * exit code.
 */

void error_exit(int code, const char *message)
{
	size_t i;

	/* Print the error message character by character */
	for (i = 0; message[i]; i++)
		_putchar(message[i]);

	/* Exit with the provided exit code */
	exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or an error code on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buf[BUFSIZ];

	/* Check if the number of arguments is correct */
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

			/* Open the source file for reading */
			fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file ");

	/* Open destination file 4 writing,create if not there,else truncate*/
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to ");


	/* Copy data from source file to destination file */
	while ((bytes_read = read(fd_from, buf, BUFSIZ)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);

		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to ");
	}

	/* Check for read error */
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file ");

	/* Close both files */
	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd ");

	return (0);
}
