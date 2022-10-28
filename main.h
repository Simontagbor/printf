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

struct formatter {
	char * letter;
	void (*f)(va_list list);

};
typedef struct formatter format_me;

/*Prototype of printf function*/
int _printf(const char *format, ...);

/* Prototype for convertor function */
int converter(const char *format, va_list list);
int print_c(va_list list);
int print_s(va_list list);
int print_d(va_list list);
int print_i(va_list list);
int _write_char(char c);
#endif
