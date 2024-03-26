#include "main.h"

/**
 * _strcat - concatenates the two strings
 * @dest: destination string
 * @src: source string to be appended
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
