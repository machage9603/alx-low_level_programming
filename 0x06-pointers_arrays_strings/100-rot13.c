#include "main.h"
#include <unistd.h>

/**
 * rot13 - encodes a string using ROT13 substitution cipher
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)

{
	char *alpha  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13  = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				found = 1;
				break;
			}
		}


		if (!found)
			_putchar(str[i]);

			}
	return (str);
}

/**
 * _putchar - writes a character to the standard output
 * @c: the character
 * Return: on sucess, the number of characters written
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
