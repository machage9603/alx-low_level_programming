#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase excluding q and e
 *
 * Return: always 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			write(1, &letter, 1);
		}
	}

	write(1, "\n", 1);

	return (0);
}
