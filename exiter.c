#include "shell.h"

/**
 * exiter - frees memory and exits the program
 * @arr: array or args
 * @line: line read
 *
 * Return: void
 */

void exiter(char **arr, char *line)
{
	free(line);
	free_args(arr);
	exit(0);
}
