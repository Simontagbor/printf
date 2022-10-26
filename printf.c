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

		if (*(format + i) == '%')
		{

			converter(format + ++i)(args);

		}
		else

		{

			write(1, format + i, 1);

		}

	}
	length = converter(format, args);
	va_end(args);
	return (length);
}
