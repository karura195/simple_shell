#include "shell.h"

/**
 * check_type - checks if command is a builtin or an executable path.
 * @args: arguments
 * @line: line read
 *
 * Return: 1 if executed
 */

int check_type(char **args, char *line)
{
	if (is_builtin(args, line))
	{
		return (1);
	}
	else if (**args == '/')
	{
		exec_cmd(args[0], args);
		return (1);
	}
	return (0);
}
