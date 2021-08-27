#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>

extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern char **environ;

/**
 * struct builtins - Handles builtins
 * @env: First member
 * @exit: Second member
 *
 * Description: builtin commands
 */

struct builtins
{
	char *env;
	char *exit;

} builtins;

/**
 * struct flags - Holds flags
 * @interactive: First member
 *
 * Description: used to handle
 * boolean switches
 */
struct flags
{
	bool interactive;
} flags;

int _strlen(const char *str);
char *_strchr(char *str, int c);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *first, const char *second, int n);
char *_strdup(char *str);
void free_args(char **m);
char **token_maker(char *str);
void exec_cmd(char *command, char **args);
void exiter(char **arr, char *line);
void print_env(void);
int is_builtin(char **command, char *line);
char *pathcat(char *path, char *command);
char *ver_paths(char **p, char *command);
char *_getpath(void);
int check_type(char **args, char *line);
void init_shell(void);
void checkD(char *buf, int len);
void checkC(int c);
int main(int argc, char **argv, char **envp);

#endif /* SHELL_H */
