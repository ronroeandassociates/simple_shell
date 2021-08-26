#include "shell.h"
/**
 * tokenizer - sperates string of words to tokens
 * @buff: buffer
 * @delim: character
 * Return: token
 *
 */
char **tokenizer(char *buff,conts char *delim)
{
	char **token, *clone = NULL;
    size_t words = 0;

    token = malloc(sizeof(char*) * TOKEN_SIZE);

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
