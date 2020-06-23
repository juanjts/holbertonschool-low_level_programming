#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable
 * Return: 1 if c is uppercase and 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
