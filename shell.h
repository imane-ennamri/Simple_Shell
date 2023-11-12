#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>

int main(int ni, char **argv);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif
