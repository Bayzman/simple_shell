#include "shell.h"

/**
 * exec_prompt - executes a prompt
 * @prompt - pointer to the string
 * Return: void
 */

void exec_prompt(char *prompt, char *argv[])
{
	pid_t child_process;

	child_process = fork();

	if (child_process == -1)
	{
		perror("fork");
	}

	else if (child_process == 0)
	{
		if (execve(prompt, argv, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}

	else
		wait(NULL);
}
