#include "main.h"

/**
 * non_existing_file - checks if the file exists
 * @fd_from:file from
 * @fd_to:destination of file
 * @argv:pointer
 *
 * Return:void
 */

void non_existing_file(int fd_from, int fd_to, char *argv[])
{
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point
 * @argc:total arguments
 * @argv:pointer
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, reads, writes, close_file;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	non_existing_file(fd_from, fd_to, argv);

	reads = 1024;
	while (reads == 1024)
	{
		reads = read(fd_from, buff, 1024);
		if (reads < 0)
		{
			non_existing_file(-1, 0, argv);
		}
		writes = write(fd_to, buff, reads);
		if (writes < 0)
		{
			non_existing_file(0, -1, argv);
		}
	}
	close_file = close(fd_from);
	if (close_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_file = close(fd_to);
	if (close_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
