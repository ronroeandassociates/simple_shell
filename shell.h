#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

char *_getline_command(void);
int _fork_func(char **arg, char **av, char **env, char *lineptr, int np, int c)
/**
 * left blank till struct is defined*/








#endif
