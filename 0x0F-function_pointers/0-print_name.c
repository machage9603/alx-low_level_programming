#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name of the person
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
