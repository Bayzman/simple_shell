#include "shell.h"

/**
 * read_command - takes input from user
 * @prompt: string input from user
 * @size: size of string
 * Return: void
 */

void read_command(char *prompt, size_t size)
{
	if (fgets(prompt, size, stdin) == NULL)
	{
		show("\n");
	}

	prompt[strcspn(prompt, "\n")] = '\0';

	if (strlen(prompt) == 0)
	{
		;
	}

	if (strcmp(prompt, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
}
