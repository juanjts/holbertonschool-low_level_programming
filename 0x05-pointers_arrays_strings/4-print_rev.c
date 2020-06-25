#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int b, len;

	len = _strlen(s) - 1;

	for (b = len; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

/**
 * _strlen - for know lengt of strings
 * @s: is a parameter
 * Return: if is need
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
