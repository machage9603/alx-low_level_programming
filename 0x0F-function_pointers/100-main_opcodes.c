#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 1 for incorrect number of arguments,
 * 2 for negative bytes.
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
		printf("%02hhx ", ((char *)main)[i]);

	printf("\n");

	return (0);
}
