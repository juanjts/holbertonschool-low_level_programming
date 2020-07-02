#include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: base
 * @y: exponent
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
