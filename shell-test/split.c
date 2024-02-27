#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[] = "I am fine!";
	char delimeters[] = " !";
	char *token;

	/*get the first token*/
	token = strtok(sentence, delimeters);

	/*tokenization*/
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimeters);
	}
	return (0);
}
