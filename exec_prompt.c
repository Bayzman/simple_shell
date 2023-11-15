#include "shell.h"

/**
 * exec_prompt - executes a prompt
 * @prompt - pointer to the string
 * Return: void
 */

void exec_prompt(const char *prompt)
{
	pid_t child_process;
	char *argv[] = {"bin/ls", "-l", NULL};
	(void) prompt;

	child_process = fork();

	if (child_process == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	else if (child_process == 0)
	{
		execve(argv[0], argv, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}

	else
		wait(NULL);
}
