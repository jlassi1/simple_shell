#ifndef SHELL
#define SHELL

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <signal.h>

extern char **environ;
extern int dir_count;
#define DELIM "\n\a\t "

void sig_handler(int sig_num);
int exe(char *fullPath, char **cmd);
int exitexe(char **cmd);
int cd(char **cmd);
int printenv(char **cmd);
int checkBuiltins(char *combine, char **cmd);
void env(char **env);
char *get_line(void);
char **split_line(char *line);
char *get_env(char **env);
char *path(char *dir, char *av);
char **dirTok(char **env);
char *checkPath(char **dir, char *cmd);

/* string function */
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);

#endif
