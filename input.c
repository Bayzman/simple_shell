#include "shell.h"

/**
 * show - print to the standard output
 * @text: pointer to a char array / string
 * Return: void
 */

void show(const char *text)
{
	write(STDOUT_FILENO, text, strlen(text));
}
