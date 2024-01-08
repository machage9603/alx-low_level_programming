#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial
 * segment of s consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;

			}
		}

		if (found == 0)
			break;
	}
	return (count);
}
