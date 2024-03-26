#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
