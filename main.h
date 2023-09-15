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
#endif
