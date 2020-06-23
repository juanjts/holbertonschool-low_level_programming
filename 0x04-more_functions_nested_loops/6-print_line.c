#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: variable
 * Return: 1 if c is uppercase and 0 if otherwise.
 */
void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
