#include "shell.h"

/**
 * _getpath - finds and returns the PATH for env
 *
 * Return: path
 */

char *_getpath(void)
{
	int i = 0;
	char **env = environ;
	char *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
