#include "holberton.h"

/**
 * factorial - check the code for Holberton School students.
 * @n: parameter
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
