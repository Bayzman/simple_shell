#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void show(const char *text);
void show_prompt(void);
void exec_prompt(const char *prompt);
void read_command(char *prompt, size_t size);

#endif
