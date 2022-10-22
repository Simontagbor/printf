#include "main.h"

/**
 * print_s - prints a character
 * @list: conversion specifier symbol to match
 * Return: void
 */

void print_s(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}
