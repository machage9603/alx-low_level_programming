#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints $ and entered command
 *
 * Return: 0 always otherwise -1
 */

int main ()
{
	char *command = NULL;
	size_t bufsize = 0;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

	if (getline(&command, &bufsize, stdin) == -1)
	{
		break;
	}

	printf("%s", command);
	}

	free(command);

	return (0);
}
