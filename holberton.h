#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdarg.h>
#define BUFFER 1000

typedef struct fto
{
        char *fto;
        int (*p)(va_list args);
} specif_fto;

struct stat st;
int main(void);
void call_function(char *buffer);
void copy_cat(int len, char **arr);
int f_exit(va_list args);
int _chdir(va_list args);
int st_command(char *buffer, ...);
int find_char(char *s, int c);
char **getarr(char *buffer, int len);
char *_getline(void);
void process(char *buffer);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(const char *str);
int _strlen(const char *str);
char *_strpbrk(char *s, const char *accept);
char *_strrchr(char *s, int c);
size_t _strspn(char *str, const char *accept);
char *_strtok(char *str, const char *separator);

#endif

