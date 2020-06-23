#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 * @c: variable
 * Return: 1 if c is uppercase and 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}

	return (0);
}
