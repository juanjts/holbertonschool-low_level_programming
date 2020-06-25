#include "holberton.h"
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
