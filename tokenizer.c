#include "shell.h"
/**
 * _strdup - return a dup of a string
 *@str: string to be dup and returned
 *
 *Return: str or NULL if not enough mem
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(char) * (strlen(str) + 1));

	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
/**
 * tokenizer - sperates string of words to tokens
 * @buff: buffer
 * @delim: character
 * Return: token
 *
 */
char **tokenizer(char *buff, conts char *delim)
{
	char **token, *clone = NULL;
	size_t words = 0;

	token = malloc(sizeof(char *) * TOKEN_SIZE);
	if (!token)
	{
		perror(STDERR_FILENO, "unable to allocat buffer");
	}
	clone = strtok(buff, delim);
	for (; clone != NULL; clone = strtok(NULL, delim))
	{
		token[words] = strtok(clone);
		words++;
	}
	token[words] = clone;
	free(clone);
	return (token);
}
