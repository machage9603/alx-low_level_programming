#include <stdio.h>
#include <stdlib.h>

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
	/*Check if lineptr or stream is NULL*/
	if (lineptr == NULL || stream == NULL)
	{
		return (-1);
	}
	
	/*Initialize variables*/
	ssize_t bytes_read = 0;
    	size_t bufsize = *n;
    	char *buffer = *lineptr;
	
	
	/*Allocate memory for buffer if it's NULL or too small*/
	
	if (buffer == NULL || bufsize < 2) {
        bufsize = 128; // Initial buffer size
        buffer = (char *)malloc(bufsize);
        if (buffer == NULL)
	{
		return -1; /*Memory allocation failed*/
        }
	
}

    /*Read characters from stream until newline or EOF*/
int c;
while ((c = fgetc(stream)) != '\n' && c != EOF) 
{
        // Check if buffer needs to be resized
        if (bytes_read + 1 >= bufsize) {
            bufsize *= 2; // Double the buffer size
            char *temp = (char *)realloc(buffer, bufsize);
            if (temp == NULL) {
                free(buffer);
                return -1; // Memory reallocation failed
            }
            buffer = temp;
        }
        // Store the character in buffer
        buffer[bytes_read++] = c;
    }

    // Add null terminator
    buffer[bytes_read] = '\0';

    // Update lineptr and n
    *lineptr = buffer;
    *n = bufsize;

    // Return the number of bytes read
    return bytes_read;
}

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t bytes_read;

    printf("Enter a line: ");
    bytes_read = my_getline(&line, &len, stdin);

    if (bytes_read != -1)
    {
        printf("You entered: %s\n", line);
    }
    else
    {
        printf("Error reading input.\n");
    }

    free(line);
    return 0;
}

