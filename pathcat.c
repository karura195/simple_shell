#include "shell.h"

/**
 * pathcat - concatenates a command with a path
 * @path: path to add
 * @command: command
 *
 * Return: buffer
 */

char *pathcat(char *path, char *command)
{
	char *buffer;
	size_t a = 0, b = 0;

	if (command == 0)
		command = "";
	if (path == 0)
		path = "";
	buffer = malloc(sizeof(char) * _strlen(path) + _strlen(command) + 2);
	if (buffer == NULL)
		return (NULL);
	while (path[a])
	{
		buffer[a] = path[a];
		a++;
	}
	if (path[a - 1] != '/')
	{
		buffer[a] = '/';
		a++;
	}
	while (command[b])
	{
		buffer[a + b] = command[b];
		b++;
	}
	buffer[a + b] = '\0';
	return (buffer);
}
