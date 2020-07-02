#include "holberton.h"

/**
 * sqrt_dual - check the code for Holberton School students.
 * @a: static parameter
 * @b: one by one parameter
 * Return: dual parameter function
 */

int sqrt_dual(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_dual(a, b + 1));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: number
 * Return: function of function.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_dual(n, 0));
}
