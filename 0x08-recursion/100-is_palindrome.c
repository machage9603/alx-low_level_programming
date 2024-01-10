#include "main.h"

/**
 * is_palindrome_recursive - detects if a string is a palindrome
 * @s: string
 * @start: starting index of the string
 * @end: ending index of the string
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (1);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Wrapper function for is_palindrome_recursive
 * @s: The string to check
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (is_palindrome_recursive(s, 0, length - 1));
}
