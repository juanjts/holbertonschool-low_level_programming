#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable
 * Return: 1 if c is uppercase and 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	return (0);
}
