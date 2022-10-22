#include "main.h"

/**
 * _write_char - prints a character
 * @list: conversion specifier symbol to match
 * Return: void
 */


int _write_char(char c)
{
	return (write(1, &c, 1));
}
