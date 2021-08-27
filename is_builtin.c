#include "shell.h"

/**
 * is_builtin - checks if the command is a builtin function
 * and executes it
 * @command: command to execute
 * @line: line read
 *
 * Return: 1 if succeed, 0 if no builtin funct.
 */

int is_builtin(char **command, char *line)
{
	struct builtins builtins = {"env", "exit"};

	if (_strcmp(*command, builtins.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strcmp(*command, builtins.exit) == 0)
	{
		exiter(command, line);
		return (1);
	}
	else
	{
		return (0);
	}
}
