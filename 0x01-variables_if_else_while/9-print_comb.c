#include <unistd.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		write(1, &i, 1);
	}
	for (i = 97; i < 103; i++)
	{
		write(1, &i, 1);
	}
	write(1, "\n", 1);

	return (0);
}
