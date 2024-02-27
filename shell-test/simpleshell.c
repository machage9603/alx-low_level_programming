#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void)
{
	/* Define maximum length of a command */
	const int MAX_COMMAND_LENGTH = 100;

	char command[MAX_COMMAND_LENGTH];

	while (1)
	{
		/* Print a prompt */
		printf("SimpleShell> ");

		/* Read the command from the user */
		fgets(command, sizeof(command), stdin);

		/* Remove the trailing newline character */
		command[strcspn(command, "\n")] = '\0';

		/* Fork a child process */
		pid_t pid = fork();

		if (pid < 0)
		{
			/* Fork failed */
			fprintf(stderr, "Fork failed\n");
			return (1);
		}

		else if (pid == 0)
		{
			/* Child process */
			if (execlp(command, command, NULL) == -1)

			{
				/* If execlp returns, it means an error occurred */
				perror("Error");
				exit(1);
			}
		}

		else
		{
			/* Parent process */
			/* Wait for the child to finish */
			wait(NULL);
		}
	}
	/* Return statement: Indicates successful completion of the program */
	return (0);
}
