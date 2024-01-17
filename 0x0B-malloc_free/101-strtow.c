#include <stdlib.h>
#include "main.h"

int is_space(char c) 
{
	return (c == ' ');
}

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!is_space(*str))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}

		else
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

char *strdup_custom(char *str, int len)
{
	char *dup = malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < len; i++)
	{
		 dup[i] = str[i];
	}

	dup[len] = '\0';
	return dup;
}

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}
	char **words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	int index = 0;
	int in_word = 0;
	int word_start = 0;

	while (*str)
	{
		if (!is_space(*str))
		{
			if (!in_word)
			{
				in_word = 1;
				word_start = str - words[0];
			}
		}
		else
		{
			if (in_word)
			{
				words[index++] = strdup_custom(str - words[0] + word_start, str - words[0] - word_start);
				if (words[index - 1] == NULL)
			{
				free(words);
				return (NULL);
			}
				in_word = 0;
			}
		}
		 str++;
	}
	if (in_word)
	{
		words[index++] = strdup_custom(str - words[0] + word_start, str - words[0] - word_start);
		if (words[index - 1] == NULL)
		{
			free(words);
			return (NULL);
		}
	}
	words[index] = NULL;
	return (words);
}
