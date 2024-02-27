Got it, here's the code without any leading spaces:

```c
#include <stdio.h>
#include <stdbool.h>

/* Function to check if a character is a delimiter */
bool is_delimiter(char c, const char *delimiters)
{
	while (*delimiters)
	{
		if (c == *delimiters)
			return true;
		delimiters++;
	}
	return false;
}

/* Function to print tokens in a string */
void print_tokens(const char *str, const char *delimiters)
{
	while (*str)
	{
		/* Skip delimiters */
		while (*str && is_delimiter(*str, delimiters))
			str++;
		/* Print token */
		while (*str && !is_delimiter(*str, delimiters))
		{
			putchar(*str);
			str++;
		}
		if (*str)
			putchar('\n'); /* Print newline between tokens */
	}
}

int main()
{
	/* Input string */
	char sentence[] = "Hello, how are you today?";
	/* Delimiters */
	char delimiters[] = " ,?"; /* delimiters are space, comma, and question mark */

	/* Print tokens in the string */
	print_tokens(sentence, delimiters);

	return (0);
}
