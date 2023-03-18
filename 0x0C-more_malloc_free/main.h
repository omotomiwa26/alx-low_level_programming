#ifndef MAIN_H
#define MAIN_H

#define ERR_MSG "Error"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>


int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);


#endif
