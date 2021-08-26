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
		execve(command, args, envp);
		perror(command);
		free(command);
		free_args(args);
		exit(98);
	}
	else
	{
		wait(&status);
	}
}
