#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 * Return: 1 if c is uppercase and 0 if otherwise.
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
