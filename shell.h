#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// Global Vars
extern char **environ;

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

// Functions & Structs of linkpath.c
/**
 * struct list_path - Linked list containing PATH directories
 * @dir: directory in path
 * @p: pointer to next node
 */
typedef struct list_path
{
	char *dir;
	struct list_path *p;
} list_path;

list_path *add_node_end(list_path **head, char *str);
char *_getenv(const char *name);
char *_which(char *filename, list_path *head);
list_path *linkpath(char *path);

#endif
