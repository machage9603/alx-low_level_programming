#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: the input string to be encoded
 * Return: a pointer to the modified string
 */

char *leet(char *str)
{
	char leetMap[256] = {0};
	int i = 0;

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	while (str[i])

	{
		if (leetMap[(unsigned char)str[i]])

		{
			str[i] = leetMap[(unsigned char)str[i]];
		}
		i++;
	}
	return (str);
}
