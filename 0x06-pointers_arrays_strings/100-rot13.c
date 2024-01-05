#include "main.h"
/**
 * rot13 - encodes a string using ROT13 substitution cipher
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)

{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (int i = 0; str[i] != '\0'; i++)
	{
		char *ptr = input;
		char *res = output;
		int found = 0;

		for (; *ptr != '\0'; ptr++, res++)
		{
			if (str[i] == *ptr)
			{
				str[i] = *res;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			{
				continue;
			}
		}
	}
	return (str);
}
