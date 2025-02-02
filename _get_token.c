#include "shell.h"
/**
 * _get_token - get token of string
 * @lineptr: comman user
 * Return: To a pointer
 */

char **_get_token(char *lineptr)
{
	char **user_comm = NULL;
	char *token = NULL;
	size_t i = 0;
	int size = 0;

	if (lineptr == NULL)
		return (NULL);
	for (i = 0; lineptr[i]; i++)
	{
		if (lineptr[i] == ' ')
			size++;
	}
	if ((size + 1) == _strlen(lineptr))
		return (NULL);
	user_comm = malloc(sizeof(char *) * (size + 2));
	if (user_comm == NULL)
		return (NULL);
	token = strtok(lineptr, " \n\t\r");
	for (i = 0; token != NULL; i++)
	{
		user_comm[i] = token;
		token = strtok(NULL, " \n\t\r");
	}
	user_comm[i] = NULL;
	return (user_comm);
}
