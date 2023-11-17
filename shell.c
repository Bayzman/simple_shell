#include "shell.h"

/**
 * main - entry point
 * Description: main function to test the developed shell
 * Return: int
 */

int main(void)
{
	char prompt[MAX_INPUT];
	char command[MAX_INPUT];
	char *argv[MAX_ARG];
	int n_args;

	while (1)
	{
		show_prompt();
		read_command(prompt, sizeof(prompt));
		n_args = cmd_args(prompt, command, argv);
		if (n_args > 0)
		{
			if (access(prompt, X_OK) == -1)
			{
				handle_path(prompt);
			}
			if (access(prompt, X_OK) == 0)
			{
				exec_prompt(prompt, argv);
			}
			else
			{
				printf("Error: Command not found\n");
			}
		}
	}

	return (0);
}
