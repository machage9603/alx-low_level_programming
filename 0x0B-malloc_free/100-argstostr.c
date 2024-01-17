#include <stdlib.h>

char *_strcat(char *dest, char *src);

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector
 * Return: A pointer to the concatenated string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int i, j, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			 total_length++;
		total_length++;
	}

	concatenated_str = malloc(sizeof(char) * (total_length + 1));

	if (concatenated_str == NULL)
		return (NULL);

	*concatenated_str = '\0';

	for (i = 0; i < ac; i++)
	{
		_strcat(concatenated_str, av[i]);
		_strcat(concatenated_str, "\n");
	}

	return (concatenated_str);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}

