#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT 1024
#define MAX_ARG 100

void show(const char *text);
void show_prompt(void);
void exec_prompt(char *prompt, char *argv[]);
void read_command(char *prompt, size_t size);
int cmd_args(char *prompt, char *command, char *argv[]);
void handle_path(char *command);

#endif
