#include "main.h"

/**
 * converter - matches symbol with corresponding function
 * @symbol: conversion specifier symbol to match
 * Return: function pointer to function matched by symbol
 */



void (*converter(const char *symbol))(va_list list)

{

	format_me func[] = {

		{"c", print_c},

	};

	int i;

	for (i = 0; i < 4; i++)
	{

		if (*symbol == *(func[i].letter))

			return (func[i].f);
	}

	write(2, "Symbol not found", 17);
	exit(1);

}
