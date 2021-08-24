#include "shell.h"

/**
 * exe_path - Executes the command indicated in the path
 * @argv: arguments
 *
 * Return: void
 */

void exe_path(char **argv)
{
        pid_t pid;
        int status;

        pid = fork();
        if (pid == 0)
        {
                execvp(argv[0], argv);
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
