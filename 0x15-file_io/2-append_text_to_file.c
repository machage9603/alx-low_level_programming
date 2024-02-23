#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL
 * Return: 1 on succcess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*open file and error handling*/

