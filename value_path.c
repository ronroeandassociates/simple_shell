#include "shell.h"
/**
 * _value_path - separate the path in new strings.
 * @arg: command input of user.
 * @env: enviroment.
 * Return:  a pointer to strings.
 */
int _value_path(char **arg, char **env)
{
	char *token = NULL, *path_rela = NULL, *path_absol = NULL;
	size_t value_path, command;
	struct stat stat_lineptr;

	if (stat(*arg, &stat_lineptr) == 0)
		return (-1);
	path_rela = _get_path(env);
	if (!path_rela)
		return (-1);
	token = _strtok(path_rela, ":");
	return (-1);
}
