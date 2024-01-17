#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate.
 * Return: A pointer to the newly allocated space containing the duplicated
 * string, or NULL if insufficient memory was available or if str is NULL.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
