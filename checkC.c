#include "shell.h"

/**
 * checkC - checks for ctrl+C command in order to ignore it
 * @c: unused int
 *
 * Return: void
 */

void checkC(int c)
{
	(void)c;
	write(STDOUT_FILENO, "\n$ ", 3);
}
