#include "shell.h"

/**
 * cmd_args - handle command lines with arguments
 * @prompt: string input from user
 * @argv: array of arguments
 * @command: first element of argv
 * Return: int
 */

int cmd_args(char *prompt, char *command, char *argv[])
{
	int argc;
	char *token;
	(void) command;

	argc = 0;
	token = strtok(prompt, " ");
	while (token != NULL)
	{
		argv[argc] = token;
		token = strtok(NULL, " ");
		argc++;
	}

	argv[argc] = NULL;

	return (argc);
}
