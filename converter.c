#include "main.h"

/**
 * converter - matches symbol with corresponding function
 * @symbol: conversion specifier symbol to match
 * Return: function pointer to function matched by symbol
 */



void (*converter(const char *symbol))(va_list list)

{
	int i, j, r_val, length;
  
  format_me func[] = {

		{"c", print_c},
		{"s", print_s}
	};
	length = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/

			for (j = 0; func[j].sym != NULL; j++)
			{
				if (format[i + 1] == func[j].sym[0])
				{
				r_val = func[j].f(list);
				if (r_val == -1)
				return (-1);
				length += r_val;
				break;
				}
			}
			if (func[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
				length = length + 2;
				}
				else
				{
				return (-1);
				}

			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			length++;
		}
	}
	return (length);
}
