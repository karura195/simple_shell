#include "shell.h"

/**
 * exe_command - Executes the command indicated in the stdin
 * @path: path of the command
 * @argv: arguments
 *
 * Return: void
 */

void exe_command(char *path, char **argv)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		execvp(path, argv);
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
	{
		perror("Fork Failed");
	}
}
