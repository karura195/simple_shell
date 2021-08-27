#include "shell.h"

/**
 * init_shell - starts the shell if it’s in interactive mode
 *
 * Return: void
 */

void init_shell(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
}
