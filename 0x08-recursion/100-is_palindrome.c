#include "main.h"

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	char *end;

	if (!*s)
		return (1);

	end = s;

	while (*end)
		end++;

	end--;

	while (s < end)

	{
		if (*s != *end)
			return (0);

		s++;
		end--;
	}

	return (1);
}
