#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void begin(void) __attribute__((constructor));

/**
 * begin - prints a sentence before the main function
 */

void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
