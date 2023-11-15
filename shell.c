#include "shell.h"

/**
 * main - entry point
 * Description: main function to test the developed shell
 * Return: int
 */

int main(void)
{
	char prompt[1024];

	while (1)
	{
		show_prompt();
		read_command(prompt, sizeof(prompt));
		exec_prompt(prompt);
	}

	return (0);
}
