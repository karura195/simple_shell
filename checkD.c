#include "shell.h"

/**
 * checkD - checks for EOF and exits
 * @buf: line read
 * @len: lenght of line
 *
 * Return: void
 */

void checkD(char *buf, int len)
{
	if (len == EOF)
	{
		free(buf);
		if (isatty(STDIN_FILENO) != 0)
			write(STDOUT_FILENO, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	else if (len == -1)
	{
		write(STDOUT_FILENO, "\n", 1);
		perror("Couldn't read");
	}
}
