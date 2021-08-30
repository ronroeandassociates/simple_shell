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

#define TOKEN_SIZE 64;
#define BUFF_SIZE 1024;

/** command line functions**/
char *_getline_command(void);
int _frk_func(char **arg, char **av, char **env, char *lineptr, int np, int c);
char *pathfinder(char **env);
void _exit_command(char **arg, char *lineptr, int _exit);
void _getenv(char **env);
/** string functions **/
size_t _strncmp(char *s1, char *s2, size_t n);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _value_path(char **arg, char **env)
char *_strdup(char *str);
char *lineptr(int np, int c);
char *_strtok(char *str, const char *delim);
#endif
