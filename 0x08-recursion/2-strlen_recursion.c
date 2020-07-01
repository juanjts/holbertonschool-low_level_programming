#include "holberton.h"

/**
 *  _strlen_recursion - check the code for Holberton School students.
 * @s: parameter
 * Return: c
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		c = _strlen_recursion(s + 1);
		c++;
	}
	return (c);
}
