#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * first - prints a sentence before the main function
 */

void first(void) __attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
