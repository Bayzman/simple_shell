#include "shell.h"

/**
 * handle_path - handles PATH
 * Description - fork must not be called if the command doesn't exist
 * @command: pointer to a string
 * Return: void
 */

void handle_path(char *command)
{
	char full_path[1024];
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *token = strtok(path_copy, ":");

	while (token != NULL)
	{
		snprintf(full_path, sizeof(full_path), "%s/%s", token, command);

		if (access(full_path, X_OK) == 0)
		{
			strcpy(command, full_path);
			break;
		}

		token = strtok(NULL, ":");
	}

	free(path_copy);
}
