#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void custom_exit(char *arg[], char *line, int status);
int valid_exit(char *arg);
int is_numeric(const char *str);
void _path(char *b, char *path, char **fullpath);
int execute_command(char **arguments, char *executable_path, char *user_input);
void handle_execution_error(char *executable_path, char **arguments, char *user_input);
void print_environment(void);
int parse_input(char *input_line, char **arguments);
int get_type_cmd(const char *line);
ssize_t read_cmd(char **line, size_t *len);
int rm_whitespace(char *str);
#endif
