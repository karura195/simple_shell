#include "shell.h"

/**
 * ver_paths - verifies the PATH containing the command
 * @p: args
 * @command: command
 *
 * Return: null
 */

char *ver_paths(char **p, char *command)
{
	int i = 0;
	char *_path;

	while (p[i])
	{
		_path = pathcat(p[i], command);
		if (access(_path, F_OK | X_OK) == 0)
		{
			return (_path);
		}
		else
		{
			free(_path);
		}
		i++;
	}
	return (NULL);
}
