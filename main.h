#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * header file: main.h
 */

int _printf(const char *format, ...);

typedef struct formatter {
	char * letter;
	void (*f)(va_list list);

} format_me;

/* Prototype for convertor function */
void (*converter(const char *))(va_list list);
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);
#endif
