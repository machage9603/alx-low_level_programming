/**
 * Creates 5 child processes, each executing 'ls -l /tmp'.
 * Waits for each child to exit before creating the next child.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	int i;
	pid_t pid;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid < 0)
		{
			/* Fork failed */
			fprintf(stderr, "Fork failed\n");
			return (1);
		}
		else if (pid == 0)
		{
			/* Child process */
			printf("Child %d executing ls -l /tmp:\n", i + 1);
			execlp("ls", "ls", "-l", "/tmp", NULL);
			/* If execlp returns, it means an error occurred */
			perror("execlp");
			exit(1);
		}
		else
		{
			/* Parent process */
			int status;

			waitpid(pid, &status, 0);
			printf("Child %d exited with status %d\n", i + 1, WEXITSTATUS(status));
		}
	}

	/* Return statement: Indicates successful completion of the program. */
	return (0);
}

