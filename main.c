#include "shell.h"

/**
 * main - initializes a simple shell
 * @ac: n° of arguments
 * @av: arguments
 *
 * Return: 0
 */

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *input = NULL;
	char *argv[120];
	int argc;
	size_t len = 0;
	ssize_t read = 0;
	char *token;
	char *path = "/bin/";
	char file_path[50];

	while (1)
	{
		write(0, "$ ", 2);
		read = getline(&input, &len, stdin);
		if (read == -1)
		{
			if (feof(stdin))
			{
				exit(EXIT_SUCCESS);
			}
			else
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		len = strlen(input);
		if (input[len - 1] == '\n')
		{
			input[len - 1] = '\0';
		}
		if (strcmp(input, "exit") == 0)
		{
			break;
		}
		token = strtok(input, " ");
		argc = 0;

		if (token == NULL)
		{
			continue;
		}
		while (token != NULL)
		{
			argv[argc] = token;
			token = strtok(NULL, " ");
			argc++;
		}
		argv[argc] = NULL;
		strcpy(file_path, path);
		strcat(file_path, argv[0]);
		if (access(argv[0], F_OK) == 0)
		{
			exe_path(argv);
		}
		else if (access(file_path, F_OK) == 0)
		{
			exe_command(file_path, argv);
		}
		else
		{
			perror("./hsh");
		}
	}
	free(input);
	free(token);
	return (0);
}
