#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: input string
 * Return: modified string
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');

	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
				(str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
				 str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
				 str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				 str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				 str[i - 1] == '}'))
		{
			str[i] -= ('a' - 'A');
		}
	}
	return (str);
}
