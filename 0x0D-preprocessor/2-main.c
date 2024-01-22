#include <stdio.h>

/**
 * print_filename - prints the name of the file it was compiled from
 */

void print_filename(void)
{
	printf("%s\n", __FILE__);
}
