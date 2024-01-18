#include "main.h"
#include <stdlib.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: On success 1, on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_error_and_exit - Prints "Error" 
 * followed by a new line and exits with
 * a status of 98
 */

void print_error_and_exit(void)
{
	char error[] = "Error\n";
	int i;

	for (i = 0; error[i] != '\0'; i++)
	{
		_putchar(error[i]);
	}

	exit(98);
}

/**
 * is_valid_number - Checks if a string contains only digits
 * @str: The string to check
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int is_valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1)'
}

/**
 * _strlen - Computes the length of a string
 * @str: The string to compute the length of
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * multiply - Multiplies two positive numbers and prints the result
 * @num1: The first number as a string
 * @num2: The second number as a string
 */

void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result;
	int i, j, carry, temp, offset;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		offset = len1 - i - 1;

		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + result[j + offset] + carry;
			carry = temp / 10;
			result[j + offset] = temp % 10;
		}

		result[offset + len2] += carry;
	}

	offset = 0;
	while (offset < len1 + len2 && result[offset] == 0)
		offset++;

	if (offset == len1 + len2)
	{
		_putchar('0');
	}

	else
	{
		for (i = offset; i < len1 + len2; i++)
			 _putchar(result[i] + '0');
	}

	_putchar('\n');

	free(result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
		print_error_and_exit();

	multiply(argv[1], argv[2]);

	return (0);
}
