
#include "main.h"

/**
 * _printf - prints formatted string
 * @format: character string that contains directives of how to print
 * Return: 0 on Success.
 */

int _printf(const char *format, ...)
{
	int i;

	for (i = 0; *(format + 1) != '\0'; i++)
	{
		write(1, format + 1);
	}
	return (0);

}

