#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

#define MAX_INPUT 1024

int main(int ni, char **argv);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *strtok(char *str, const char *delim);
void printTokens(char **tokens, int tokens_read);
void freeTokens(char **tokens, int tokens_read);
int main(void);
#endif
