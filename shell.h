#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// Functions of string.c files
int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
char *_strdup(char *str);
char *concat_all(char *name, char *sep, char *value);

// Functions of line_exec.c file
char **splitstring(char *str, const char *delim);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void execute(char **argv);
void freearv(char **arv);

#endif
