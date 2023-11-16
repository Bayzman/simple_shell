#include "shell.h"

/**
 * main - entry point
 * Description: main function to test the developed shell
 * Return: int
 */

int main(void)
{
	char prompt[MAX_INPUT];
	char *argv[MAX_ARG];

	while (1)
	{
		show_prompt();
		read_command(prompt, sizeof(prompt));
		exec_prompt(prompt, argv);
	}

	return (0);
}
