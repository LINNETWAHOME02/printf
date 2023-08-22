#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *formaat, ...);
int _sprintf(char *str, const char *string,...);
size_t _strlen(const char *str);
#endif
