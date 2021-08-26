#include "shell.h"

/**
 * free_args - frees an array
 * @a: array
 *
 * Return: void
 */

void free_args(char **a)
{
	int index = 0;

	if (a == NULL)
	{
		return;
	}
	while (a[index])
	{
		free(a[index]);
		index++;
	}
	free(a);
}
