#include "shell.h"

/**
 * exec_cmd - executes a command
 * @command: command to execute
 * @args: arguments
 *
 * Return: void
 */

void exec_cmd(char *command, char **args)
{
	pid_t pid;
	int status;
	char **envp = environ;

	pid = fork();
	if (pid < 0)
	{
		perror(command);
	}
	if (pid == 0)
	{
		if (execve(command, args, envp) == -1)
		{
			perror(command);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
}
