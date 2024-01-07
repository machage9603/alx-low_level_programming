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
		if (i < 57)
		{
			write(1, ", ", 2);
		}
	}

	write(1, "\n", 1);

	return (0);
}
