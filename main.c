#include "shell.h"

/**
 * main - initializes a simple shell
 * @argc: n° of arguments
 * @argv: arguments
 * @envp: environment
 *
 * Return: 0
 */

int main(int argc, char **argv, char **envp)
{
	char *line_buffer = NULL, *pathcmd = NULL, *path = NULL;
	size_t buffer_size = 0;
	ssize_t line = 0;
	char **args = NULL, **paths = NULL;
	(void) argc, (void) envp, (void) argv;

	signal(SIGINT, checkC);
	while (1)
	{
		free_args(args);
		free_args(paths);
		init_shell();
		line = getline(&line_buffer, &buffer_size, stdin);
		checkD(line_buffer, line);
		if (line_buffer[line - 1] == '\n')
			line_buffer[line - 1]  = '\0';
		args = token_maker(line_buffer);
		if (args == NULL || *args == NULL || **args == '\0')
			free_args(args);
		if (check_type(args, line_buffer))
			continue;
		path = _getpath();
		paths = token_maker(path);
		pathcmd = ver_paths(paths, args[0]);
		if (pathcmd == NULL)
			perror(argv[0]);
		else
			exec_cmd(pathcmd, args);
		free(pathcmd);
	}
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	free(line_buffer);
	fflush(stdin);
	return (0);
}
