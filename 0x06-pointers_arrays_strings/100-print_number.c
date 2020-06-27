#include "holberton.h"

/**
 * print_number -  check
 * @n: variable
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int z;
	int b, i;

	i = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		z = n;
	while (z / i > 9)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		b = z / i;
		z = z % i;
		_putchar (b + '0');
		i = i / 10;
	}
	}
}
