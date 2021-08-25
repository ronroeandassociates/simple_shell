#include "shell.h"
/**
 * main - main arguments functions
 * @ac:count of argumnents
 * @av: arguments
 * @env: environment
 * Return: _exit = 0.
 */
int main(int ac, char **av, char **env)
{
	char *getcommand = NULL, **user_command = NULL;
	int pathValue = 0, _exit = 0, n = 0;
	(void)ac;
