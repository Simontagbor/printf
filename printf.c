#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _printf - prints formatted string
 * @format: character string that contains directives of how to print
 * Return: the string inputted.
 */

int _printf(const char *format, ...)
{
	int i;
	int num_args = strlen(format);
	va_list args;
	va_start(args, format);
	for (i = 0; i < num_args; i++)
	{
		return (write(1, &format[i], num_args));
	}

}

