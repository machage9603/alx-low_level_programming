#include <stdio.h>
#include <unistd.h>

/**
 * main - get PPID
 *
 * Return: 0 always.
 */

int main()
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("ppid is: %u\n", my_ppid);
	return (0);
}
