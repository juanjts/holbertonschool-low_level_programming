#include "holberton.h"

/**
 * puts2 - print reverse characters.
 * @str: validate the character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
