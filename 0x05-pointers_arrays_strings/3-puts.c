#include <stdio.h>
#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: is a parameter
 * Return: if is required
 */
void _puts(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
