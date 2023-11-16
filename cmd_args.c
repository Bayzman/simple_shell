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
	int i;
	char *token;

	i = 0;
	token = strtok(prompt, " ");
	while (token != NULL)
	{
		if (i == 0)
		{
			strcpy(command, token);
		}
		else
		{
			argv[i - 1] = token;
		}

		token = strtok(NULL, " ");
		i++;
	}

	argv[i - 1] = NULL;

	return (i - 1);
}
