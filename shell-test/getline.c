#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *command = 0;
	size_t bufsize = 0;

	while (1)
	{
		printf("$ ");
		ssize_t bytes_read = getline(&command, &bufsize, stdin);

		if (bytes_read == -1)
		{
			break;
		}
		printf("%s", command);
	}
	free(command);
	return (0);
}

