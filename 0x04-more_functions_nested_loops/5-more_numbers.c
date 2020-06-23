#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 * Return: if is need
 */
void more_numbers(void)
{
	int c, n;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + 48);
			}
			_putchar(n % 10 + 48);
		}
	_putchar('\n');
	}
}
