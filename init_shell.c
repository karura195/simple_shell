#include "shell.h"

/**
 * init_shell - starts the shell if it’s in interactive mode
 *
 * Return: void
 */

void init_shell(void)
{
        bool interactive;

        if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
        {
                interactive = 1;
        }
        if (interactive)
        {
                write(STDERR_FILENO, "$ ", 2);
        }
}
