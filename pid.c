#include "shell.h"
/**
 * main - gets pid and ppid
 *
 *Return: 0
 */
int main(void)
{
	int p_id, p_pid;

	p_id = getpid(); /*process id*/
	p_pid = getppid(); /*parent process id*/

	return (0);
}
