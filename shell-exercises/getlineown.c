#include <stdio.h>
#include <stdlib.h>

char *my_getline(void) {
    char *line = NULL;
    size_t bufsize = 0; // getline will allocate memory for us
    ssize_t characters_read = getline(&line, &bufsize, stdin);
    if (characters_read == -1) {
        free(line);
        return NULL; // Error or EOF
    } else {
        // Remove newline character if present
        if (line[characters_read - 1] == '\n')
            line[characters_read - 1] = '\0';
        return line;
    }
}

int main() {
    printf("Enter a line of text: ");
    char *line = my_getline();
    if (line) {
        printf("You entered: %s\n", line);
        free(line);
    } else {
        printf("Error or EOF encountered.\n");
    }
    return 0;
}

